#pragma once
// IWYU pragma private; include "MA/InternalBridge/GPUDriven/UnityGPUDrivenLODGroupDataCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(UnityGPUDrivenLODGroupDataCallback)
namespace MA::InternalBridge::GPUDriven {
struct UnityGPUDrivenLODGroupData;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace MA::InternalBridge::GPUDriven {
class UnityGPUDrivenLODGroupDataCallback;
}
// Write type traits
MARK_REF_T(::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*);
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*, "MA.InternalBridge.GPUDriven", "UnityGPUDrivenLODGroupDataCallback");
// Dependencies System.MulticastDelegate
namespace MA::InternalBridge::GPUDriven {
// Is value type: false
// CS Name: MA.InternalBridge.GPUDriven.UnityGPUDrivenLODGroupDataCallback
class CORDL_TYPE UnityGPUDrivenLODGroupDataCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x181ecde30, size 0x80, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>  lodGroupData, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x181509d00, size 0xa0, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>  lodGroupData, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>  lodGroupData) ;

static inline ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804dc850, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityGPUDrivenLODGroupDataCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityGPUDrivenLODGroupDataCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityGPUDrivenLODGroupDataCallback(UnityGPUDrivenLODGroupDataCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityGPUDrivenLODGroupDataCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityGPUDrivenLODGroupDataCallback(UnityGPUDrivenLODGroupDataCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21132};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback) == 0x80, "Size mismatch!");

} // namespace end def MA::InternalBridge::GPUDriven
