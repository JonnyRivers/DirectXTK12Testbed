//
// pch.h
// Header for standard system include files.
//

#pragma once

#include <WinSDKVer.h>
#define _WIN32_WINNT 0x0A00
#include <SDKDDKVer.h>

// Use the C++ standard templated min/max
#define NOMINMAX

// DirectX apps don't need GDI
#define NODRAWTEXT
#define NOGDI
#define NOBITMAP

// Include <mcx.h> if you need this
#define NOMCX

// Include <winsvc.h> if you need this
#define NOSERVICE

// WinHelp is deprecated
#define NOHELP

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <wrl/client.h>
#include <wrl/event.h>

#include <d3d12.h>
#include <dxgi1_4.h>
#include <DirectXMath.h>
#include <DirectXColors.h>

#include "d3dx12.h"

#include <algorithm>
#include <exception>
#include <memory>
#include <stdexcept>

#ifdef _DEBUG
#include <dxgidebug.h>
#endif

#include "../../../Microsoft/DirectXTK12/Inc/CommonStates.h"
#include "../../../Microsoft/DirectXTK12/Inc/DDSTextureLoader.h"
#include "../../../Microsoft/DirectXTK12/Inc/DescriptorHeap.h"
#include "../../../Microsoft/DirectXTK12/Inc/DirectXHelpers.h"
#include "../../../Microsoft/DirectXTK12/Inc/EffectPipelineStateDescription.h"
#include "../../../Microsoft/DirectXTK12/Inc/Effects.h"
#include "../../../Microsoft/DirectXTK12/Inc/GamePad.h"
#include "../../../Microsoft/DirectXTK12/Inc/GeometricPrimitive.h"
#include "../../../Microsoft/DirectXTK12/Inc/GraphicsMemory.h"
#include "../../../Microsoft/DirectXTK12/Inc/Keyboard.h"
#include "../../../Microsoft/DirectXTK12/Inc/Model.h"
#include "../../../Microsoft/DirectXTK12/Inc/Mouse.h"
#include "../../../Microsoft/DirectXTK12/Inc/PostProcess.h"
#include "../../../Microsoft/DirectXTK12/Inc/PrimitiveBatch.h"
#include "../../../Microsoft/DirectXTK12/Inc/RenderTargetState.h"
#include "../../../Microsoft/DirectXTK12/Inc/ResourceUploadBatch.h"
#include "../../../Microsoft/DirectXTK12/Inc/ScreenGrab.h"
#include "../../../Microsoft/DirectXTK12/Inc/SimpleMath.h"
#include "../../../Microsoft/DirectXTK12/Inc/SpriteBatch.h"
#include "../../../Microsoft/DirectXTK12/Inc/SpriteFont.h"
#include "../../../Microsoft/DirectXTK12/Inc/VertexTypes.h"
#include "../../../Microsoft/DirectXTK12/Inc/WICTextureLoader.h"

namespace DX
{
    inline void ThrowIfFailed(HRESULT hr)
    {
        if (FAILED(hr))
        {
            // Set a breakpoint on this line to catch DirectX API errors
            throw std::exception();
        }
    }
}