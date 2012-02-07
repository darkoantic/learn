<?php
/**
 * @file
 * issue_teams.default_lessons.inc
 */

/**
 * Implements hook_default_lessons().
 */
function issue_teams_default_lessons() {
  $export = array();

  $lessons = new stdClass;
  $lessons->disabled = FALSE; /* Edit this to true to make a default lessons disabled initially */
  $lessons->api_version = 1;
  $lessons->name = 'create_an_issue_team';
  $lessons->title = 'Create an issue team to work on an issue in the queue';
  $lessons->author = '';
  $lessons->project = 'learn_drupal';
  $lessons->project_type = 'core';
  $lessons->lesson_type = 'configuration';
  $lessons->description = '';
  $lessons->version = '';
  $lessons->steps = 'Please add a brief explanation here. The basic idea is: If there\'s an issue in queue you\'re working on or interested in working on, add your name and your issue to this spreadsheet to pair up with someone. You don\'t need to know the solution. You just need to understand the problem well enough to help someone else understand it so you can work through it together.

Link to this spreadsheet (maybe we should embed this:
https://docs.google.com/spreadsheet/ccc?key=0AjEp9HDGLykIdEJkOTAzREdLbDZ5b1VncGl4NXFiM0E&hl=en_US#gid=0

Maybe try embedding the spreadsheet here?...
<script src="https://docs.google.com/spreadsheet/gpub?url=http%3A%2F%2Ftngmqk5kknht7idkbhrks3qtltpmeg9f-ss-opensocial.googleusercontent.com%2Fgadgets%2Fifr%3Fup_title%3DDrupal%2520issue%2520teams%26up_showfilters%3D0%26up_enablegrouping%3D0%26up__table_query_url%3Dhttps%253A%252F%252Fdocs.google.com%252Fspreadsheet%252Ftq%253Frange%253DA%25253AG%2526gid%253D0%2526key%253D0AjEp9HDGLykIdEJkOTAzREdLbDZ5b1VncGl4NXFiM0E%2526pub%253D1%26url%3Dhttp%253A%252F%252Fwww.google.com%252Fig%252Fmodules%252Ftable.xml%26spreadsheets%3Dspreadsheets&height=766&width=1312"></script>
';
  $lessons->permission = '';
  $export['create_an_issue_team'] = $lessons;

  $lessons = new stdClass;
  $lessons->disabled = FALSE; /* Edit this to true to make a default lessons disabled initially */
  $lessons->api_version = 1;
  $lessons->name = 'join_an_issue_team';
  $lessons->title = 'Join an issue team to work on an issue in the queue';
  $lessons->author = '';
  $lessons->project = 'learn_drupal';
  $lessons->project_type = 'core';
  $lessons->lesson_type = 'configuration';
  $lessons->description = '';
  $lessons->version = '';
  $lessons->steps = 'Please add a brief explanation here. Find someone who doesn\'t have a partner and a meeting time that works for you and pair up:

Link to this spreadsheet (maybe we should embed this:
https://docs.google.com/spreadsheet/ccc?key=0AjEp9HDGLykIdEJkOTAzREdLbDZ5b1VncGl4NXFiM0E&hl=en_US#gid=0

Maybe try embedding the spreadsheet here?...
<script src="https://docs.google.com/spreadsheet/gpub?url=http%3A%2F%2Ftngmqk5kknht7idkbhrks3qtltpmeg9f-ss-opensocial.googleusercontent.com%2Fgadgets%2Fifr%3Fup_title%3DDrupal%2520issue%2520teams%26up_showfilters%3D0%26up_enablegrouping%3D0%26up__table_query_url%3Dhttps%253A%252F%252Fdocs.google.com%252Fspreadsheet%252Ftq%253Frange%253DA%25253AG%2526gid%253D0%2526key%253D0AjEp9HDGLykIdEJkOTAzREdLbDZ5b1VncGl4NXFiM0E%2526pub%253D1%26url%3Dhttp%253A%252F%252Fwww.google.com%252Fig%252Fmodules%252Ftable.xml%26spreadsheets%3Dspreadsheets&height=766&width=1312"></script>
';
  $lessons->permission = '';
  $export['join_an_issue_team'] = $lessons;

  return $export;
}
