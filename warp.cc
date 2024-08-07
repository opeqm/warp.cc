getgenv().Warp = {
    ['Global'] = {
        ['Dead'] = true; -- Both lp and target
        ['Grabbed'] = true;
        ['Reload'] = true;
        ['Wall'] = true;
    };

    ['Main'] = {
        -- .gg/Warpcc
        ['Toggled'] = true;
        ['Threading'] = "RenderStepped";
        ['UpdateTarget'] = false;
        ['AntiFloorHit'] = false, 
        ['Resolver'] = false,
        ['Resolver Key'] = "K",
        ['Prediction'] = 0.135;
        ['anticurve'] = true;
        -- .gg/Warpcc
        ['Bind'] = {
            ['Key'] = "C";
            ['Mode'] = "Toggle"; -- Hold or Toggle
        };
        -- .gg/Warpcc
        ['Offset'] = {
            ['Toggled'] = false;
            ['Jumping'] = {
                ['Part'] = "Head"
            };
        };
        -- .gg/Warpcc
        ['Selected Part'] = {
            ['Part'] = "HumanoidRootPart";
            ['Closest Part'] = false
        };
        -- .gg/Warpcc
        ['Properties'] = {
            ['Smoothness'] = {
                ['Factor'] = 1.2;
                ['Smoothness'] = 0.03;
            };
        };
    };

    ['Silent Aim'] = { -- must have camlock on for it to work
        ['Toggled'] = true;
        ['Prediction'] = 0.135;
        ['Dont Match Camlock'] = false;
        ['Resolver'] = true,
        ['Resolver Key'] = "K",
        ['Anti Floor Hit'] = {
            ['Toggled'] = true;
            ['Interval'] = 2;
            ['Only When Jumping'] = true;
        };
        -- .gg/Warpcc
        ['Offset'] = {
            ['Toggled'] = false;
            ['Jumping'] = {
                ['Part'] = "Head"
            };
        };
        -- .gg/Warpcc
        ['Selected Part'] = {
            ['Part'] = "HumanoidRootPart";
            ['Closest Part'] = false
        };
    };
    ['Spin'] = {
        ['Enabled'] = true,
        ['Key'] = "V",
        ['Speed'] = 4900,
    },

    -- .gg/Warpcc
    ['Fov'] = {
        ['Threading'] = "Heartbeat";
        ['Shown'] = false;
        ['Color'] = Color3.new(255,255,255);
        ['Radius'] = 120;
    };
}
loadstring(game:HttpGet("https://api.luarmor.net/files/v3/loaders/31dbe56e04c85fb81b1346caf6230a88.lua"))()
