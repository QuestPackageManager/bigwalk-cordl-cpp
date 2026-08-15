#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioVolumeStruct.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioVolumeStruct)
namespace GlobalNamespace {
class IAudioVolume;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct AudioVolumeStruct;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AudioVolumeStruct);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioVolumeStruct, "", "AudioVolumeStruct");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioVolumeStruct
struct CORDL_TYPE AudioVolumeStruct {
public:
// Declarations
 __declspec(property(get=get_UniqueID)) int64_t  UniqueID;

 __declspec(property(get=get_Value)) float_t  Value;

/// @brief Field _lastId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__lastId, put=setStaticF__lastId)) int64_t  _lastId;

/// @brief Convert operator to "::GlobalNamespace::IAudioVolume"
constexpr operator  ::GlobalNamespace::IAudioVolume*() ;

/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::AudioVolumeStruct>"
constexpr operator  ::System::IComparable_1<::GlobalNamespace::AudioVolumeStruct>*() ;

/// @brief Method CompareTo, addr 0x1804823c0, size 0x40, virtual true, abstract: false, final true
inline int32_t CompareTo(::GlobalNamespace::AudioVolumeStruct  other) ;

/// @brief Method Equals, addr 0x180482400, size 0x80, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method GetHashCode, addr 0x180482480, size 0x30, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0x1804824b0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(float_t  vol, ::StringW  identifier) ;

static inline int64_t getStaticF__lastId() ;

/// @brief Method get_UniqueID, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline int64_t get_UniqueID() ;

/// @brief Method get_Value, addr 0x180303b40, size 0x10, virtual true, abstract: false, final true
inline float_t get_Value() ;

/// @brief Convert to "::GlobalNamespace::IAudioVolume"
constexpr ::GlobalNamespace::IAudioVolume* i___GlobalNamespace__IAudioVolume() ;

/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::AudioVolumeStruct>"
constexpr ::System::IComparable_1<::GlobalNamespace::AudioVolumeStruct>* i___System__IComparable_1___GlobalNamespace__AudioVolumeStruct_() ;

/// @brief Method op_Equality, addr 0x180482500, size 0x20, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::AudioVolumeStruct  operand1, ::GlobalNamespace::AudioVolumeStruct  operand2) ;

/// @brief Method op_GreaterThan, addr 0x180482540, size 0x20, virtual false, abstract: false, final false
static inline bool op_GreaterThan(::GlobalNamespace::AudioVolumeStruct  operand1, ::GlobalNamespace::AudioVolumeStruct  operand2) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x180482520, size 0x20, virtual false, abstract: false, final false
static inline bool op_GreaterThanOrEqual(::GlobalNamespace::AudioVolumeStruct  operand1, ::GlobalNamespace::AudioVolumeStruct  operand2) ;

/// @brief Method op_Implicit, addr 0x180482560, size 0x30, virtual false, abstract: false, final false
static inline ::GlobalNamespace::AudioVolumeStruct op_Implicit___GlobalNamespace__AudioVolumeStruct(float_t  f) ;

/// @brief Method op_Implicit, addr 0x180303b40, size 0x10, virtual false, abstract: false, final false
static inline float_t op_Implicit_float_t(::GlobalNamespace::AudioVolumeStruct  av) ;

/// @brief Method op_Inequality, addr 0x180482590, size 0x20, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::AudioVolumeStruct  operand1, ::GlobalNamespace::AudioVolumeStruct  operand2) ;

/// @brief Method op_LessThan, addr 0x1804825d0, size 0x20, virtual false, abstract: false, final false
static inline bool op_LessThan(::GlobalNamespace::AudioVolumeStruct  operand1, ::GlobalNamespace::AudioVolumeStruct  operand2) ;

/// @brief Method op_LessThanOrEqual, addr 0x1804825b0, size 0x20, virtual false, abstract: false, final false
static inline bool op_LessThanOrEqual(::GlobalNamespace::AudioVolumeStruct  operand1, ::GlobalNamespace::AudioVolumeStruct  operand2) ;

static inline void setStaticF__lastId(int64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AudioVolumeStruct() ;

// Ctor Parameters [CppParam { name: "_UniqueID_k__BackingField", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "_value", ty: "float_t", modifiers: "", def_value: None }]
constexpr AudioVolumeStruct(int64_t  _UniqueID_k__BackingField, float_t  _value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17498};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <UniqueID>k__BackingField, offset: 0x0, size: 0x8, def value: None
 int64_t  _UniqueID_k__BackingField;

/// @brief Field _value, offset: 0x8, size: 0x4, def value: None
 float_t  _value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioVolumeStruct, _UniqueID_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioVolumeStruct, _value) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioVolumeStruct) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
