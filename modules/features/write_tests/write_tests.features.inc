<?php
/**
 * @file
 * write_tests.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function write_tests_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ladder" && $api == "default_ladder") {
    return array("version" => "1");
  }
}
