package com.binaryoracles.rbc;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.Spinner;
import android.widget.Toast;

public class donor extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_donor);

        Spinner spinner = (Spinner) findViewById(R.id.btype2);
        ArrayAdapter<CharSequence> adapter = ArrayAdapter.createFromResource(this,R.array.bgroup, android.R.layout.simple_spinner_dropdown_item);
        adapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        spinner.setAdapter(adapter);

        Button sub2;
        sub2 = (Button) findViewById(R.id.sub2);
        sub2.setOnClickListener(new View.OnClickListener() {
            @Override
                    public void onClick(View view)
            {
                 Toast.makeText(getApplicationContext(),"Thank you for joining RBC. Your contributions will be appreciated!", Toast.LENGTH_LONG).show();
                Intent intent = new Intent(donor.this, startview.class);
                startActivity(intent);
            }
        });
    }
}
