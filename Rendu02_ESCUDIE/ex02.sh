curl -L https://docs.google.com/uc\?export\=download\&id\=0Bx-PGwLU7KF7RFc0S0xYdjNFUEE -o "src/library.xml"
echo « nombres de lignes: » ;grep -c « track ID » library.xml
echo « nombres de musique de ManuChao » ;grep -wc RARE library.xml