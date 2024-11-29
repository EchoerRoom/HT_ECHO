/*
* Tencent is pleased to support the open source community by making Puerts available.
* Copyright (C) 2020 THL A29 Limited, a Tencent company.  All rights reserved.
* Puerts is licensed under the BSD 3-Clause License, except for the third-party components listed in the file 'LICENSE' which may be subject to their corresponding license terms.
* This file is subject to the terms and conditions defined in file 'LICENSE', which is part of this source code package.
*/

var global = global || (function () { return this; }());
(function (global) {
    "use strict";
    let levels = ['log', 'info', 'warn', 'error'];
    let sendRequestSync = puerts.sendRequestSync;
    
    let tgjsLog = global.__tgjsLog || function(nlevel, msg) {
        sendRequestSync(levels[nlevel], msg);
    }
    global.__tgjsLog = global.__tgjsLog;

    global.puerts.console = console;
    global.console = console;

    global.puerts.logger = console;
    global.logger = console;
}(global));
