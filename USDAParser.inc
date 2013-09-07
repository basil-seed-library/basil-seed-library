<?php
/**
 * Parses USDA Plants CSVs.
 *
 * See http://plants.usda.gov.
 */
class USDAParser extends FeedsCSVParser {

  protected function parseItems(ParserCSV $parser, ParserCSVIterator $iterator, $start = 0, $limit = 0) {
    $parser->setLineLimit($limit);
    $parser->setStartByte($start);
    $rows = $parser->parse($iterator);

    // Process each row.
    foreach ($rows as $key => $row) {
      $row['symbol'] = empty($row['synonym symbol']) ? $row['symbol'] : $row['synonym symbol'];
      $species = explode(' ', $row['scientific name with author']);
      $row['genus'] = $species[0];
      $row['species'] = $species[0] . " " . $species[1];

      $row['common name'] = empty($row['common name']) ? $row['species'] : ucwords(strtolower($row['common name']));

      $var_key = array_search('var.', $species);
      if ($var_key !== FALSE) {
        $row['variety'] = ucwords(strtolower(implode(' ', array_slice($species, $var_key + 1))));
      }

     $rows[$key] = $row;
    }
    return $rows;
  }
}