#pragma once
// IWYU pragma private; include "UnityEngineInternal/Input/NativeInputSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeInputSystem)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
struct IntPtr;
}
namespace UnityEngineInternal::Input {
struct NativeInputUpdateType;
}
namespace UnityEngineInternal::Input {
class NativeUpdateCallback;
}
// Forward declare root types
namespace UnityEngineInternal::Input {
class NativeInputSystem;
}
// Write type traits
MARK_REF_T(::UnityEngineInternal::Input::NativeInputSystem*);
DEFINE_IL2CPP_CLASS(::UnityEngineInternal::Input::NativeInputSystem*, "UnityEngineInternal.Input", "NativeInputSystem");
// Dependencies System.Object
namespace UnityEngineInternal::Input {
// Is value type: false
// CS Name: UnityEngineInternal.Input.NativeInputSystem
class CORDL_TYPE NativeInputSystem : public ::System::Object {
public:
// Declarations
/// @brief Field onBeforeUpdate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onBeforeUpdate, put=setStaticF_onBeforeUpdate)) ::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>*  onBeforeUpdate;

/// @brief Field onShouldRunUpdate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onShouldRunUpdate, put=setStaticF_onShouldRunUpdate)) ::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType,bool>*  onShouldRunUpdate;

/// @brief Field onUpdate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onUpdate, put=setStaticF_onUpdate)) ::UnityEngineInternal::Input::NativeUpdateCallback*  onUpdate;

/// @brief Field s_OnDeviceDiscoveredCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_OnDeviceDiscoveredCallback, put=setStaticF_s_OnDeviceDiscoveredCallback)) ::System::Action_2<int32_t,::StringW>*  s_OnDeviceDiscoveredCallback;

/// @brief Method NotifyBeforeUpdate, addr 0x1822ed2a0, size 0x60, virtual false, abstract: false, final false
static inline void NotifyBeforeUpdate(::UnityEngineInternal::Input::NativeInputUpdateType  updateType) ;

/// @brief Method NotifyDeviceDiscovered, addr 0x1822ed300, size 0x60, virtual false, abstract: false, final false
static inline void NotifyDeviceDiscovered(int32_t  deviceId, ::StringW  deviceDescriptor) ;

/// @brief Method NotifyUpdate, addr 0x1822ed360, size 0x70, virtual false, abstract: false, final false
static inline void NotifyUpdate(::UnityEngineInternal::Input::NativeInputUpdateType  updateType, ::System::IntPtr  eventBuffer) ;

/// @brief Method ShouldRunUpdate, addr 0x1822ed3d0, size 0x70, virtual false, abstract: false, final false
static inline void ShouldRunUpdate(::UnityEngineInternal::Input::NativeInputUpdateType  updateType, ::by_ref<bool>  retval) ;

static inline ::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>* getStaticF_onBeforeUpdate() ;

static inline ::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType,bool>* getStaticF_onShouldRunUpdate() ;

static inline ::UnityEngineInternal::Input::NativeUpdateCallback* getStaticF_onUpdate() ;

static inline ::System::Action_2<int32_t,::StringW>* getStaticF_s_OnDeviceDiscoveredCallback() ;

static inline void setStaticF_onBeforeUpdate(::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>*  value) ;

static inline void setStaticF_onShouldRunUpdate(::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType,bool>*  value) ;

static inline void setStaticF_onUpdate(::UnityEngineInternal::Input::NativeUpdateCallback*  value) ;

static inline void setStaticF_s_OnDeviceDiscoveredCallback(::System::Action_2<int32_t,::StringW>*  value) ;

/// @brief Method set_hasDeviceDiscoveredCallback, addr 0x1822ed480, size 0x40, virtual false, abstract: false, final false
static inline void set_hasDeviceDiscoveredCallback(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeInputSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeInputSystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeInputSystem(NativeInputSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeInputSystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeInputSystem(NativeInputSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21478};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngineInternal::Input::NativeInputSystem) == 0x10, "Size mismatch!");

} // namespace end def UnityEngineInternal::Input
