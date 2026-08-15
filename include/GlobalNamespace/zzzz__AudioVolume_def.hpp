#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioVolume)
namespace GlobalNamespace {
class IAudioVolume;
}
namespace System {
template<typename T>
class IComparable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioVolume;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioVolume*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioVolume*, "", "AudioVolume");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioVolume
class CORDL_TYPE AudioVolume : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_InitialVolume)) float_t  InitialVolume;

 __declspec(property(get=get_Value, put=set_Value)) float_t  Value;

/// @brief Field _initialVolume, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__initialVolume, put=__cordl_internal_set__initialVolume)) float_t  _initialVolume;

/// @brief Field _realtimeVolume, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__realtimeVolume, put=__cordl_internal_set__realtimeVolume)) float_t  _realtimeVolume;

/// @brief Convert operator to "::GlobalNamespace::IAudioVolume"
constexpr operator  ::GlobalNamespace::IAudioVolume*() noexcept;

/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::AudioVolume*>"
constexpr operator  ::System::IComparable_1<::GlobalNamespace::AudioVolume*>*() noexcept;

/// @brief Method CompareTo, addr 0x1804825f0, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::GlobalNamespace::AudioVolume*  audioVolume) ;

static inline ::GlobalNamespace::AudioVolume* New_ctor(float_t  initVol, ::StringW  identifier) ;

constexpr float_t const& __cordl_internal_get__initialVolume() const;

constexpr float_t& __cordl_internal_get__initialVolume() ;

constexpr float_t const& __cordl_internal_get__realtimeVolume() const;

constexpr float_t& __cordl_internal_get__realtimeVolume() ;

constexpr void __cordl_internal_set__initialVolume(float_t  value) ;

constexpr void __cordl_internal_set__realtimeVolume(float_t  value) ;

/// @brief Method .ctor, addr 0x180482610, size 0x30, virtual false, abstract: false, final false
inline void _ctor(float_t  initVol, ::StringW  identifier) ;

/// @brief Method get_InitialVolume, addr 0x180346a80, size 0x10, virtual false, abstract: false, final false
inline float_t get_InitialVolume() ;

/// @brief Method get_Value, addr 0x1803bda00, size 0x10, virtual true, abstract: false, final true
inline float_t get_Value() ;

/// @brief Convert to "::GlobalNamespace::IAudioVolume"
constexpr ::GlobalNamespace::IAudioVolume* i___GlobalNamespace__IAudioVolume() noexcept;

/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::AudioVolume*>"
constexpr ::System::IComparable_1<::GlobalNamespace::AudioVolume*>* i___System__IComparable_1___GlobalNamespace__AudioVolume__() noexcept;

/// @brief Method op_GreaterThan, addr 0x180482680, size 0x40, virtual false, abstract: false, final false
static inline bool op_GreaterThan(::GlobalNamespace::AudioVolume*  operand1, ::GlobalNamespace::AudioVolume*  operand2) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x180482640, size 0x40, virtual false, abstract: false, final false
static inline bool op_GreaterThanOrEqual(::GlobalNamespace::AudioVolume*  operand1, ::GlobalNamespace::AudioVolume*  operand2) ;

/// @brief Method op_Implicit, addr 0x1804826c0, size 0x20, virtual false, abstract: false, final false
static inline float_t op_Implicit_float_t(::GlobalNamespace::AudioVolume*  av) ;

/// @brief Method op_LessThan, addr 0x180482720, size 0x40, virtual false, abstract: false, final false
static inline bool op_LessThan(::GlobalNamespace::AudioVolume*  operand1, ::GlobalNamespace::AudioVolume*  operand2) ;

/// @brief Method op_LessThanOrEqual, addr 0x1804826e0, size 0x40, virtual false, abstract: false, final false
static inline bool op_LessThanOrEqual(::GlobalNamespace::AudioVolume*  operand1, ::GlobalNamespace::AudioVolume*  operand2) ;

/// @brief Method set_Value, addr 0x1803bda40, size 0x10, virtual false, abstract: false, final false
inline void set_Value(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioVolume", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioVolume(AudioVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioVolume", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioVolume(AudioVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17499};

/// @brief Field _initialVolume, offset: 0x10, size: 0x4, def value: None
 float_t  ____initialVolume;

/// @brief Field _realtimeVolume, offset: 0x14, size: 0x4, def value: None
 float_t  ____realtimeVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioVolume, ____initialVolume) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioVolume, ____realtimeVolume) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioVolume) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
