<?php
/**
 * @file
 * reroll_patches.default_ladder.inc
 */

/**
 * Implements hook_default_ladder().
 */
function reroll_patches_default_ladder() {
  $export = array();

  $rung = new stdClass;
  $rung->disabled = FALSE; /* Edit this to true to make a default rung disabled initially */
  $rung->api_version = 1;
  $rung->ladder = 'drupal';
  $rung->name = 'reroll_patches';
  $rung->title = 'Re-roll patches';
  $rung->description = '';
  $rung->lesson = 'reroll_patches';
  $rung->css_class = 'ladder-in-development';
  $rung->weight = 70;
  $export['reroll_patches'] = $rung;

  return $export;
}
