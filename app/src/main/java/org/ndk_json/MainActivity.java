package org.ndk_json;

import android.app.Activity;
import android.os.Bundle;
import android.widget.Button;
import android.widget.TextView;
import android.view.View;
import android.view.View.OnClickListener;

public class MainActivity extends Activity {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        final TextView jsonText = (TextView) findViewById(R.id.json_text);
//        jsonText.setEnabled(false);
        Button buttonGet = (Button)findViewById(R.id.buttonGet);

        buttonGet.setOnClickListener(new OnClickListener() {
            public void onClick(View v) {
                jsonText.setText("json string data:\n\n" + stringFromJNI() );
            }
        });

    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
}
