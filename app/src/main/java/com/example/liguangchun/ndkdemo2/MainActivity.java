package com.example.liguangchun.ndkdemo2;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    private TextView mTextView;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        mTextView= (TextView) findViewById(R.id.textView);
        NdkHelper ndkHelper=new NdkHelper();;
        double d=ndkHelper.getStr();
        mTextView.setText(d+"");
    }
}
