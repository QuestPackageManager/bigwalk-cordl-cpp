#pragma once
// IWYU pragma private; include "MA/InternalBridge/GPUDriven/UnityGPURendererDataCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(UnityGPURendererDataCallback)
namespace MA::InternalBridge::GPUDriven {
struct UnityGPUDrivenRendererGroupData;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
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
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace MA::InternalBridge::GPUDriven {
class UnityGPURendererDataCallback;
}
// Write type traits
MARK_REF_T(::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*);
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*, "MA.InternalBridge.GPUDriven", "UnityGPURendererDataCallback");
// Dependencies System.MulticastDelegate
namespace MA::InternalBridge::GPUDriven {
// Is value type: false
// CS Name: MA.InternalBridge.GPUDriven.UnityGPURendererDataCallback
class CORDL_TYPE UnityGPURendererDataCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x181ece7b0, size 0x70, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>  rendererData, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Mesh>>*  meshes, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>*  materials, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x181509d00, size 0xa0, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>  rendererData, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>  rendererData, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Mesh>>*  meshes, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>*  materials) ;

static inline ::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1814e3a20, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityGPURendererDataCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityGPURendererDataCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityGPURendererDataCallback(UnityGPURendererDataCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityGPURendererDataCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityGPURendererDataCallback(UnityGPURendererDataCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21131};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback) == 0x80, "Size mismatch!");

} // namespace end def MA::InternalBridge::GPUDriven
