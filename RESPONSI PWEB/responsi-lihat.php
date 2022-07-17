<?php
    echo "<HEAD><TITLE>TABLE PESANAN</HEAD></TITLE>";
    $fp = fopen("responsi.txt","r");
    echo "<center>";
    echo "<h1>Tabel Pesanan</H1>";
    echo "<table border=1>";
    echo "<tr>";
    echo "<td width=200px>TANGGAL MENGISI</td><td width=100px>NAMA</td><td width=200px>NOMOR
    </td><td width=100px>HARGA</td><td width=200px>TANGGAL DATANG</td>";
    echo "</tr>";
    
    while ($isi=fgets($fp,80)){
        $pisah =explode("|",$isi);
        echo "<tr><td>";
        echo date('Y-m-d');
        echo "</td>";
        echo "<td>$pisah[0]</td><td>$pisah[1]</td><td>$pisah[2]</td><td>$pisah[3]</td></tr>";
    }
    echo "</table>";
    echo "<BR><BR><a href=index.html>::MEMSAN LAGI::</a>";
    echo "</center>";
?>
