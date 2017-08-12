package com.binaryoracles.rbc;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;


public class Reqmod extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_reqmod);

        Button sub2;
        sub2 = (Button) findViewById(R.id.sub2);
        sub2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {


                Toast.makeText(getApplicationContext(), "Thank you. Donors will start donating within the mentioned date", Toast.LENGTH_LONG).show();
                Intent intent = new Intent(Reqmod.this, startview.class);
                startActivity(intent);

            }
        });
    }
}
