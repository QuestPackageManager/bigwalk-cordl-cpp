#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioReceive.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioFilterBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioReceive)
namespace GlobalNamespace {
class AudioSend;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioReceive;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioReceive*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioReceive*, "", "AudioReceive");
// Dependencies AudioFilterBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioReceive
class CORDL_TYPE AudioReceive : public ::GlobalNamespace::AudioFilterBase {
public:
// Declarations
 __declspec(property(get=get_Bypass, put=set_Bypass)) bool  Bypass;

/// @brief Field DebugBypass, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_DebugBypass, put=setStaticF_DebugBypass)) bool  DebugBypass;

 __declspec(property(get=get_InternalBypass, put=set_InternalBypass)) bool  InternalBypass;

/// @brief Field MultiplyMode, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_MultiplyMode, put=__cordl_internal_set_MultiplyMode)) bool  MultiplyMode;

 __declspec(property(get=get_Sends, put=set_Sends)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSend>>*  Sends;

 __declspec(property(get=get_Vol, put=set_Vol)) float_t  Vol;

/// @brief Field <Sends>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Sends_k__BackingField, put=__cordl_internal_set__Sends_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSend>>*  _Sends_k__BackingField;

/// @brief Field _bypass, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__bypass, put=__cordl_internal_set__bypass)) bool  _bypass;

/// @brief Field _internalBypass, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__internalBypass, put=__cordl_internal_set__internalBypass)) bool  _internalBypass;

/// @brief Field _mixedData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__mixedData, put=__cordl_internal_set__mixedData)) ::ArrayW<float_t>  _mixedData;

/// @brief Field _vol, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__vol, put=__cordl_internal_set__vol)) float_t  _vol;

/// @brief Method AssignSends, addr 0x180499ec0, size 0x100, virtual false, abstract: false, final false
inline void AssignSends(::GlobalNamespace::AudioSend*  send) ;

/// @brief Method Awake, addr 0x180499fc0, size 0xc0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::AudioReceive* New_ctor() ;

/// @brief Method ProcessSamples, addr 0x18049a080, size 0x210, virtual true, abstract: false, final false
inline void ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels) ;

/// @brief Method RemoveSends, addr 0x18049a290, size 0xa0, virtual false, abstract: false, final false
inline void RemoveSends(::GlobalNamespace::AudioSend*  send) ;

/// @brief Method UpdateVariables, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void UpdateVariables(float_t  deltaTime) ;

constexpr bool const& __cordl_internal_get_MultiplyMode() const;

constexpr bool& __cordl_internal_get_MultiplyMode() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSend>>* const& __cordl_internal_get__Sends_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSend>>*& __cordl_internal_get__Sends_k__BackingField() ;

constexpr bool const& __cordl_internal_get__bypass() const;

constexpr bool& __cordl_internal_get__bypass() ;

constexpr bool const& __cordl_internal_get__internalBypass() const;

constexpr bool& __cordl_internal_get__internalBypass() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__mixedData() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__mixedData() ;

constexpr float_t const& __cordl_internal_get__vol() const;

constexpr float_t& __cordl_internal_get__vol() ;

constexpr void __cordl_internal_set_MultiplyMode(bool  value) ;

constexpr void __cordl_internal_set__Sends_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSend>>*  value) ;

constexpr void __cordl_internal_set__bypass(bool  value) ;

constexpr void __cordl_internal_set__internalBypass(bool  value) ;

constexpr void __cordl_internal_set__mixedData(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__vol(float_t  value) ;

/// @brief Method .ctor, addr 0x18049a330, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_DebugBypass() ;

/// @brief Method get_Bypass, addr 0x1803a7440, size 0x10, virtual true, abstract: false, final false
inline bool get_Bypass() ;

/// @brief Method get_InternalBypass, addr 0x1803a7410, size 0x10, virtual true, abstract: false, final false
inline bool get_InternalBypass() ;

/// @brief Method get_Sends, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSend>>* get_Sends() ;

/// @brief Method get_Vol, addr 0x1802f80d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Vol() ;

static inline void setStaticF_DebugBypass(bool  value) ;

/// @brief Method set_Bypass, addr 0x1803a7490, size 0x10, virtual true, abstract: false, final false
inline void set_Bypass(bool  value) ;

/// @brief Method set_InternalBypass, addr 0x1803a7480, size 0x10, virtual true, abstract: false, final false
inline void set_InternalBypass(bool  value) ;

/// @brief Method set_Sends, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_Sends(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSend>>*  value) ;

/// @brief Method set_Vol, addr 0x18049a390, size 0x30, virtual false, abstract: false, final false
inline void set_Vol(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioReceive() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioReceive", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioReceive(AudioReceive && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioReceive", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioReceive(AudioReceive const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17599};

/// @brief Field _internalBypass, offset: 0x20, size: 0x1, def value: None
 bool  ____internalBypass;

/// @brief Field _bypass, offset: 0x21, size: 0x1, def value: None
 bool  ____bypass;

/// @brief Field _vol, offset: 0x24, size: 0x4, def value: None
 float_t  ____vol;

/// @brief Field MultiplyMode, offset: 0x28, size: 0x1, def value: None
 bool  ___MultiplyMode;

/// @brief Field _mixedData, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<float_t>  ____mixedData;

/// @brief Field <Sends>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSend>>*  ____Sends_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioReceive, ____internalBypass) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioReceive, ____bypass) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioReceive, ____vol) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioReceive, ___MultiplyMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioReceive, ____mixedData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioReceive, ____Sends_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioReceive) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
