#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ProcessorInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Audio/zzzz__Handle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProcessorInstance)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Audio {
struct ProcessorHeader;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_CreationParameters;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_Message;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_UpdateSetting;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct ProcessorInstance_UpdateSetting;
}
namespace UnityEngine::Audio {
struct ProcessorInstance;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_CreationParameters;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_Message;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::ProcessorInstance_UpdateSetting);
MARK_VAL_T(::UnityEngine::Audio::ProcessorInstance);
MARK_VAL_T(::UnityEngine::Audio::ProcessorInstance_CreationParameters);
MARK_VAL_T(::UnityEngine::Audio::ProcessorInstance_Message);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ProcessorInstance_UpdateSetting, "UnityEngine.Audio", "ProcessorInstance/UpdateSetting");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ProcessorInstance, "UnityEngine.Audio", "ProcessorInstance");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ProcessorInstance_CreationParameters, "UnityEngine.Audio", "ProcessorInstance/CreationParameters");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ProcessorInstance_Message, "UnityEngine.Audio", "ProcessorInstance/Message");
// Dependencies 
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ProcessorInstance/UpdateSetting
struct CORDL_TYPE ProcessorInstance_UpdateSetting {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProcessorInstance_UpdateSetting_Unwrapped
enum struct __ProcessorInstance_UpdateSetting_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_NeverUpdate = static_cast<int32_t>(0x1),
__E_UpdateIfDataIsAvailable = static_cast<int32_t>(0x2),
__E_UpdateAlways = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProcessorInstance_UpdateSetting_Unwrapped () const noexcept {
return static_cast<__ProcessorInstance_UpdateSetting_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProcessorInstance_UpdateSetting() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ProcessorInstance_UpdateSetting(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::UnityEngine::Audio::ProcessorInstance_UpdateSetting const Default;

/// @brief Field NeverUpdate value: I32(1)
static ::UnityEngine::Audio::ProcessorInstance_UpdateSetting const NeverUpdate;

/// @brief Field UpdateAlways value: I32(3)
static ::UnityEngine::Audio::ProcessorInstance_UpdateSetting const UpdateAlways;

/// @brief Field UpdateIfDataIsAvailable value: I32(2)
static ::UnityEngine::Audio::ProcessorInstance_UpdateSetting const UpdateIfDataIsAvailable;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20488};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance_UpdateSetting, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ProcessorInstance_UpdateSetting) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Audio
// Dependencies UnityEngine.Audio.ProcessorInstance::UpdateSetting
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ProcessorInstance/CreationParameters
struct CORDL_TYPE ProcessorInstance_CreationParameters {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ProcessorInstance_CreationParameters() ;

// Ctor Parameters [CppParam { name: "_controlUpdateSetting_k__BackingField", ty: "::UnityEngine::Audio::ProcessorInstance_UpdateSetting", modifiers: "", def_value: None }, CppParam { name: "_realtimeUpdateSetting_k__BackingField", ty: "::UnityEngine::Audio::ProcessorInstance_UpdateSetting", modifiers: "", def_value: None }]
constexpr ProcessorInstance_CreationParameters(::UnityEngine::Audio::ProcessorInstance_UpdateSetting  _controlUpdateSetting_k__BackingField, ::UnityEngine::Audio::ProcessorInstance_UpdateSetting  _realtimeUpdateSetting_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20487};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <controlUpdateSetting>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::Audio::ProcessorInstance_UpdateSetting  _controlUpdateSetting_k__BackingField;

/// @brief Field <realtimeUpdateSetting>k__BackingField, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::Audio::ProcessorInstance_UpdateSetting  _realtimeUpdateSetting_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance_CreationParameters, _controlUpdateSetting_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance_CreationParameters, _realtimeUpdateSetting_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ProcessorInstance_CreationParameters) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::Audio
// Dependencies System.IntPtr
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ProcessorInstance/Message
struct CORDL_TYPE ProcessorInstance_Message {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ProcessorInstance_Message() ;

// Ctor Parameters [CppParam { name: "TypeHash", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "Data", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "ManagedHandle", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr ProcessorInstance_Message(int64_t  TypeHash, void*  Data, ::System::IntPtr  ManagedHandle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20489};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field TypeHash, offset: 0x0, size: 0x8, def value: None
 int64_t  TypeHash;

/// @brief Field Data, offset: 0x8, size: 0x8, def value: None
 void*  Data;

/// @brief Field ManagedHandle, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ManagedHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance_Message, TypeHash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance_Message, Data) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance_Message, ManagedHandle) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ProcessorInstance_Message) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Audio
// Dependencies Unity.Audio.Handle
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ProcessorInstance
struct CORDL_TYPE ProcessorInstance {
public:
// Declarations
using CreationParameters = ::UnityEngine::Audio::ProcessorInstance_CreationParameters;

using Message = ::UnityEngine::Audio::ProcessorInstance_Message;

using UpdateSetting = ::UnityEngine::Audio::ProcessorInstance_UpdateSetting;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Audio::ProcessorInstance>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Audio::ProcessorInstance>*() ;

/// @brief Method Equals, addr 0x18223c230, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x180bbb190, size 0x50, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Audio::ProcessorInstance  other) ;

/// @brief Method GetHashCode, addr 0x180bbb260, size 0x14e50, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Audio::ProcessorInstance>"
constexpr ::System::IEquatable_1<::UnityEngine::Audio::ProcessorInstance>* i___System__IEquatable_1___UnityEngine__Audio__ProcessorInstance_() ;

// Ctor Parameters []
// @brief default ctor
constexpr ProcessorInstance() ;

// Ctor Parameters [CppParam { name: "Handle", ty: "::Unity::Audio::Handle", modifiers: "", def_value: None }, CppParam { name: "Header", ty: "::UnityEngine::Audio::ProcessorHeader*", modifiers: "", def_value: None }]
constexpr ProcessorInstance(::Unity::Audio::Handle  Handle, ::UnityEngine::Audio::ProcessorHeader*  Header) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20490};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Handle, offset: 0x0, size: 0x10, def value: None
 ::Unity::Audio::Handle  Handle;

/// @brief Field Header, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Audio::ProcessorHeader*  Header;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance, Handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::ProcessorInstance, Header) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ProcessorInstance) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Audio
