#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioSend.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioFilterBase_def.hpp"
#include "GlobalNamespace/zzzz__AudioReceive_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioSend)
namespace GlobalNamespace {
class AudioReceive;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioSend;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioSend*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioSend*, "", "AudioSend");
// Dependencies AudioFilterBase, AudioReceive
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioSend
class CORDL_TYPE AudioSend : public ::GlobalNamespace::AudioFilterBase {
public:
// Declarations
 __declspec(property(get=get_Bypass, put=set_Bypass)) bool  Bypass;

 __declspec(property(get=get_CachedData, put=set_CachedData)) ::ArrayW<float_t>  CachedData;

/// @brief Field DebugBypass, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_DebugBypass, put=setStaticF_DebugBypass)) bool  DebugBypass;

 __declspec(property(get=get_InternalBypass, put=set_InternalBypass)) bool  InternalBypass;

 __declspec(property(get=get_Receives, put=set_Receives)) ::ArrayW<::UnityW<::GlobalNamespace::AudioReceive>>  Receives;

 __declspec(property(get=get_VolAfterSend, put=set_VolAfterSend)) float_t  VolAfterSend;

 __declspec(property(get=get_VolBeforeSend, put=set_VolBeforeSend)) float_t  VolBeforeSend;

/// @brief Field <CachedData>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__CachedData_k__BackingField, put=__cordl_internal_set__CachedData_k__BackingField)) ::ArrayW<float_t>  _CachedData_k__BackingField;

/// @brief Field _audioReceives, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioReceives, put=__cordl_internal_set__audioReceives)) ::ArrayW<::UnityW<::GlobalNamespace::AudioReceive>>  _audioReceives;

/// @brief Field _bypass, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__bypass, put=__cordl_internal_set__bypass)) bool  _bypass;

/// @brief Field _internalBypass, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__internalBypass, put=__cordl_internal_set__internalBypass)) bool  _internalBypass;

/// @brief Field _volAfterSend, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__volAfterSend, put=__cordl_internal_set__volAfterSend)) float_t  _volAfterSend;

/// @brief Field _volBeforeSend, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__volBeforeSend, put=__cordl_internal_set__volBeforeSend)) float_t  _volBeforeSend;

/// @brief Method Awake, addr 0x180499fc0, size 0xc0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearData, addr 0x18049a3c0, size 0x30, virtual false, abstract: false, final false
inline void ClearData() ;

static inline ::GlobalNamespace::AudioSend* New_ctor() ;

/// @brief Method ProcessSamples, addr 0x18049a3f0, size 0x110, virtual true, abstract: false, final false
inline void ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels) ;

/// @brief Method UpdateVariables, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void UpdateVariables(float_t  deltaTime) ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__CachedData_k__BackingField() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__CachedData_k__BackingField() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioReceive>> const& __cordl_internal_get__audioReceives() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioReceive>>& __cordl_internal_get__audioReceives() ;

constexpr bool const& __cordl_internal_get__bypass() const;

constexpr bool& __cordl_internal_get__bypass() ;

constexpr bool const& __cordl_internal_get__internalBypass() const;

constexpr bool& __cordl_internal_get__internalBypass() ;

constexpr float_t const& __cordl_internal_get__volAfterSend() const;

constexpr float_t& __cordl_internal_get__volAfterSend() ;

constexpr float_t const& __cordl_internal_get__volBeforeSend() const;

constexpr float_t& __cordl_internal_get__volBeforeSend() ;

constexpr void __cordl_internal_set__CachedData_k__BackingField(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__audioReceives(::ArrayW<::UnityW<::GlobalNamespace::AudioReceive>>  value) ;

constexpr void __cordl_internal_set__bypass(bool  value) ;

constexpr void __cordl_internal_set__internalBypass(bool  value) ;

constexpr void __cordl_internal_set__volAfterSend(float_t  value) ;

constexpr void __cordl_internal_set__volBeforeSend(float_t  value) ;

/// @brief Method .ctor, addr 0x18049a500, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_DebugBypass() ;

/// @brief Method get_Bypass, addr 0x18049a520, size 0x10, virtual true, abstract: false, final false
inline bool get_Bypass() ;

/// @brief Method get_CachedData, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<float_t> get_CachedData() ;

/// @brief Method get_InternalBypass, addr 0x1803023c0, size 0x10, virtual true, abstract: false, final false
inline bool get_InternalBypass() ;

/// @brief Method get_Receives, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::GlobalNamespace::AudioReceive>> get_Receives() ;

/// @brief Method get_VolAfterSend, addr 0x18049a530, size 0x10, virtual false, abstract: false, final false
inline float_t get_VolAfterSend() ;

/// @brief Method get_VolBeforeSend, addr 0x1803f2be0, size 0x10, virtual false, abstract: false, final false
inline float_t get_VolBeforeSend() ;

static inline void setStaticF_DebugBypass(bool  value) ;

/// @brief Method set_Bypass, addr 0x18049a540, size 0x10, virtual true, abstract: false, final false
inline void set_Bypass(bool  value) ;

/// @brief Method set_CachedData, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_CachedData(::ArrayW<float_t>  value) ;

/// @brief Method set_InternalBypass, addr 0x180323260, size 0x10, virtual true, abstract: false, final false
inline void set_InternalBypass(bool  value) ;

/// @brief Method set_Receives, addr 0x18049a550, size 0x130, virtual false, abstract: false, final false
inline void set_Receives(::ArrayW<::GlobalNamespace::AudioReceive*>  value) ;

/// @brief Method set_VolAfterSend, addr 0x18049a680, size 0x30, virtual false, abstract: false, final false
inline void set_VolAfterSend(float_t  value) ;

/// @brief Method set_VolBeforeSend, addr 0x18049a6b0, size 0x30, virtual false, abstract: false, final false
inline void set_VolBeforeSend(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioSend() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioSend", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioSend(AudioSend && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioSend", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioSend(AudioSend const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17600};

/// @brief Field _audioReceives, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::AudioReceive>>  ____audioReceives;

/// @brief Field _volBeforeSend, offset: 0x28, size: 0x4, def value: None
 float_t  ____volBeforeSend;

/// @brief Field _volAfterSend, offset: 0x2c, size: 0x4, def value: None
 float_t  ____volAfterSend;

/// @brief Field <CachedData>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<float_t>  ____CachedData_k__BackingField;

/// @brief Field _internalBypass, offset: 0x38, size: 0x1, def value: None
 bool  ____internalBypass;

/// @brief Field _bypass, offset: 0x39, size: 0x1, def value: None
 bool  ____bypass;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioSend, ____audioReceives) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSend, ____volBeforeSend) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSend, ____volAfterSend) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSend, ____CachedData_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSend, ____internalBypass) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSend, ____bypass) == 0x39, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioSend) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
