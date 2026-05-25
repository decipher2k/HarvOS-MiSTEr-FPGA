<!doctype html>
<html>
<head>
  <meta charset="utf-8">
  <title>HarvTTP PHP</title>
  <link rel="stylesheet" href="/assets/style.css">
</head>
<body>
  <main>
    <h1>HarvTTP PHP</h1>
    <p>Rendered by <?= phpversion() ?> inside harvttp.elf.</p>
    <p>Script: <?= $_SERVER['SCRIPT_NAME'] ?></p>
    <p>Server: <?php echo $_SERVER['SERVER_SOFTWARE'] . ' at ' . harvttp_ip(); ?></p>
    <p>Remote: <?= remote_addr() ?></p>
    <p>Tick: <?= time() ?></p>
    <?php harvttp_info(); ?>
    <p><a href="/">Back to index</a></p>
  </main>
</body>
</html>
