<?php
    echo "<HEAD><TITLE>TERIMA KASIH</TITLE></HEAD>";
    $nama=$_POST['nama'];
    $nomor=$_POST['nomor'];
    $status=$_POST['status'];
    $tanggal=$_POST['tanggal'];
    if($nama != "" && $nomor!="" && $status!="" && $tanggal!=""){
        $fp = fopen("responsi.txt","a+");
        fputs($fp,"$nama|$nomor|$status|$tanggal\n");
        fclose($fp);
        echo "<CENTER>";
        echo "<BR>Terimakasih Atas Pesanannya <BR><BR>";
        echo "<a href=index.html> MEMESAN LAGI </a><BR>";
        echo "<a href=responsi-lihat.php> LIHAT PESANAN MU</a><BR>";
        echo "</CENTER>";
    }
    else{
        echo "<CENTER>";
        echo "<H1>TOLONG ISI ULANG</H1><BR>";
        echo "<H1>ANDA KURANG LENGKAP DALAM MENGISI</H1>";
        echo "<a href=index.html> MEMESAN LAGI </a><BR>";
        echo "</CENTER>";
    }
?>