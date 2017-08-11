package com.binaryoracles.rbc;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.content.Intent;
import android.view.View;
import android.widget.Button;

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

        Button request;
        request.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(){
                Intent myIntent = new Intent(this, requestpage.class);
                        startActivity(Intent);
            }
        });


    }

}
