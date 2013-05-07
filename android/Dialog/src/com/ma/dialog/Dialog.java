package com.ma.dialog;

import android.os.Bundle;
import android.app.Activity;
import android.app.AlertDialog;
import android.app.AlertDialog.Builder;
import android.content.DialogInterface;
import android.content.DialogInterface.OnClickListener;

import android.view.Menu;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

public class Dialog extends Activity {

	
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main);
        Button bt = (Button)findViewById(R.id.bt);
    	final Builder builder = new AlertDialog.Builder(this);
    	bt.setOnClickListener(new View.OnClickListener(){
    		public void onClick(View source){
    			builder.setIcon(R.drawable.d);
    			builder.setTitle("�Զ�����ͨ�Ի���ť");
    			builder.setMessage("һ���򵥵���ʾ");
    			builder.setPositiveButton("ȷ��", new OnClickListener(){
    				public void onClick(DialogInterface dialog, int which){
    					EditText show = (EditText)findViewById(R.id.ev);
    					show.setText("�û�������ȷ����ť");
    				}
    			});
    			builder.setNegativeButton("ȡ��", new OnClickListener(){
    				public void onClick(DialogInterface dialog, int which){
    					EditText show = (EditText)findViewById(R.id.ev);
    					show.setText("������ȡ����ť");
    				}
    			});
    			
    		}
    	});

    }

}
