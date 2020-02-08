<?php 
function biodata(){
    $biodata_asli=[
        "name" => "Sugma Maulidah Nafi'ah",
        "age" => 21,
        "address" => "Jl. Raya Watutulis Gg. Makam",
        "hobbies" => ["membaca","menggambar","makan"],
        "is_married" => false,
        "list_school" => [
            "school_name" => "Universitas Brawijaya",
            "year_in" => 2015,
            "year_out" => 2019,
            "major" => "mathematics"
        ],
        "skills" => [
            "writing" => "Advanced",
            "Design" => "Beginner",
            "Programming" => "Beginner"
        ],
        "interest_in_coding" => true
     ];
     
     $bio = json_encode($biodata_asli);
     return $bio;
}
echo biodata ();

?>