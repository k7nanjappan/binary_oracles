package com.binaryoracles.rbc;

import android.content.Context;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.content.Intent;
import android.view.View;
import android.widget.Button;
import android.widget.ImageButton;

public class startview extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_startview);

        Button donate;
        donate = (Button) findViewById(R.id.button2);
        donate.setOnClickListener(new View.OnClickListener(){

            @Override
            public void onClick(View view) {
                Intent intent = new Intent(startview.this, requestpage.class);
                startActivity(intent);
            }

        });

        ImageButton button = (ImageButton) findViewById(R.id.request);
        final Context context = this;
        button.setOnClickListener(new View.OnClickListener(){
            @Override
                    public void onClick(View v){
            Intent intent2 = new Intent(context, requestpage.class);
            startActivity(intent2);
        }
    });

    }

}
