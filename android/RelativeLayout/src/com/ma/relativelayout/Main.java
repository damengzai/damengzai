package com.ma.relativelayout;

import android.os.Bundle;
import android.app.Activity;
import android.view.Menu;

public class Main extends Activity {

    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.relativelayout);
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        getMenuInflater().inflate(R.menu.relativelayout, menu);
        return true;
    }
}
