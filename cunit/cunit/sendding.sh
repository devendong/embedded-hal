#!/bin/bash
content="$1 by iag"
curl 'https://oapi.dingtalk.com/robot/send?access_token=114972438143978be937eac726fe2059fff5a5d11e607e92830b243859b3c503' \
 -H 'Content-Type: application/json' \
 -d '{"msgtype": "text","text": {"content": "'"$content"'"} }'
