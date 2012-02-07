<?php
/**
 * @file
 * review_and_revise_patches.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function review_and_revise_patches_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ladder" && $api == "default_ladder") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "lessons" && $api == "default_lessons") {
    return array("version" => "1");
  }
}
