[9:39 pm, 10/03/2026] VEDANSH TOMAR: package com.example.image;

import android.os.Bundle;
import android.widget.Button;
import android.widget.ImageView;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

public class MainActivity extends AppCompatActivity {

    Button btn;
    ImageView img;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);

        btn = findViewById(R.id.bt);
        img = findViewById(R.id.im);

        btn.setOnClickListener(v-> img.setVisibility(ImageView.VISIBLE)  );

    }
}
[10:36 pm, 10/03/2026] VEDANSH TOMAR: .
[10:36 pm, 10/03/2026] VEDANSH TOMAR: .
[10:36 pm, 10/03/2026] VEDANSH TOMAR: .
[10:36 pm, 10/03/2026] VEDANSH TOMAR: .
[10:36 pm, 10/03/2026] VEDANSH TOMAR: package com.example.app;

import android.os.Bundle;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Initialize views here
        // Set listeners here
    }
}
[10:36 pm, 10/03/2026] VEDANSH TOMAR: this was a boilerplate code
[11:17 pm, 10/03/2026] VEDANSH TOMAR: package com.example.first;

import android.os.Bundle;
import android.widget.*;
import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

public class MainActivity extends AppCompatActivity {

    Button btn;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);

        btn = findViewById(R.id.bt);


        btn.setOnClickListener(  v -> {
            btn.setText("Welcome");
        } );


    }
}
[11:27 pm, 10/03/2026] VEDANSH TOMAR: color Change
[11:27 pm, 10/03/2026] VEDANSH TOMAR: package com.example.second;

import android.graphics.Color;
import android.os.Bundle;
import android.widget.*;
import android.graphics.*;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

public class MainActivity extends AppCompatActivity {

    Button btn;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);


        btn = findViewById(R.id.bt);

        btn.setOnClickListener( v -> {

            btn.setBackgroundColor(Color.RED);

        } );

    }
}
[11:45 pm, 10/03/2026] VEDANSH TOMAR: Image
[11:45 pm, 10/03/2026] VEDANSH TOMAR: >
[11:45 pm, 10/03/2026] VEDANSH TOMAR: .
[11:45 pm, 10/03/2026] VEDANSH TOMAR: package com.example.third;

import android.os.Bundle;
import android.widget.*;
import androidx.activity.EdgeToEdge;
import  android.view.*;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

public class MainActivity extends AppCompatActivity {

    Button btn;
    ImageView img;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);

        btn = findViewById(R.id.button);
        img = findViewById(R.id.im);
        btn.setOnClickListener(v ->
        {
            img.setVisibility(View.VISIBLE);
        });


    }
}
[11:53 pm, 10/03/2026] VEDANSH TOMAR: toast
[11:53 pm, 10/03/2026] VEDANSH TOMAR: package com.example.four;

import android.os.Bundle;
import android.widget.Button;
import android.widget.Toast;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

public class MainActivity extends AppCompatActivity {

    Button btn;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);

        btn = findViewById(R.id.button);

        btn.setOnClickListener( v ->
        {

            Toast.makeText(this,"Weloce to my page ", Toast.LENGTH_LONG).show();

        });


    }
}
