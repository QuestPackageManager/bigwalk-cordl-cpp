#pragma once
// IWYU pragma private; include "Dissonance/ChannelProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ChannelProperties)
namespace Dissonance::Audio::Capture {
class IChannelPriorityProvider;
}
namespace Dissonance {
struct ChannelPriority;
}
// Forward declare root types
namespace Dissonance {
class ChannelProperties;
}
// Write type traits
MARK_REF_T(::Dissonance::ChannelProperties*);
DEFINE_IL2CPP_CLASS(::Dissonance::ChannelProperties*, "Dissonance", "ChannelProperties");
// Dependencies Dissonance.ChannelPriority, System.Object
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.ChannelProperties
class CORDL_TYPE ChannelProperties : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AmplitudeMultiplier, put=set_AmplitudeMultiplier)) float_t  AmplitudeMultiplier;

 __declspec(property(get=get_Id, put=set_Id)) uint16_t  Id;

 __declspec(property(get=get_Positional, put=set_Positional)) bool  Positional;

 __declspec(property(get=get_Priority, put=set_Priority)) ::Dissonance::ChannelPriority  Priority;

 __declspec(property(get=get_TransmitPriority)) ::Dissonance::ChannelPriority  TransmitPriority;

/// @brief Field <Id>k__BackingField, offset 0x18, size 0x2 
 __declspec(property(get=__cordl_internal_get__Id_k__BackingField, put=__cordl_internal_set__Id_k__BackingField)) uint16_t  _Id_k__BackingField;

/// @brief Field <Positional>k__BackingField, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get__Positional_k__BackingField, put=__cordl_internal_set__Positional_k__BackingField)) bool  _Positional_k__BackingField;

/// @brief Field <Priority>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Priority_k__BackingField, put=__cordl_internal_set__Priority_k__BackingField)) ::Dissonance::ChannelPriority  _Priority_k__BackingField;

/// @brief Field _amplitudeMultiplier, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__amplitudeMultiplier, put=__cordl_internal_set__amplitudeMultiplier)) float_t  _amplitudeMultiplier;

/// @brief Field _defaultPriority, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultPriority, put=__cordl_internal_set__defaultPriority)) ::Dissonance::Audio::Capture::IChannelPriorityProvider*  _defaultPriority;

static inline ::Dissonance::ChannelProperties* New_ctor(::Dissonance::Audio::Capture::IChannelPriorityProvider*  defaultPriority) ;

constexpr uint16_t const& __cordl_internal_get__Id_k__BackingField() const;

constexpr uint16_t& __cordl_internal_get__Id_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Positional_k__BackingField() const;

constexpr bool& __cordl_internal_get__Positional_k__BackingField() ;

constexpr ::Dissonance::ChannelPriority const& __cordl_internal_get__Priority_k__BackingField() const;

constexpr ::Dissonance::ChannelPriority& __cordl_internal_get__Priority_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__amplitudeMultiplier() const;

constexpr float_t& __cordl_internal_get__amplitudeMultiplier() ;

constexpr ::Dissonance::Audio::Capture::IChannelPriorityProvider* const& __cordl_internal_get__defaultPriority() const;

constexpr ::Dissonance::Audio::Capture::IChannelPriorityProvider*& __cordl_internal_get__defaultPriority() ;

constexpr void __cordl_internal_set__Id_k__BackingField(uint16_t  value) ;

constexpr void __cordl_internal_set__Positional_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Priority_k__BackingField(::Dissonance::ChannelPriority  value) ;

constexpr void __cordl_internal_set__amplitudeMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__defaultPriority(::Dissonance::Audio::Capture::IChannelPriorityProvider*  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Audio::Capture::IChannelPriorityProvider*  defaultPriority) ;

/// @brief Method get_AmplitudeMultiplier, addr 0x1802f42b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_AmplitudeMultiplier() ;

/// @brief Method get_Id, addr 0x1805c5550, size 0x10, virtual false, abstract: false, final false
inline uint16_t get_Id() ;

/// @brief Method get_Positional, addr 0x1805c5560, size 0x10, virtual false, abstract: false, final false
inline bool get_Positional() ;

/// @brief Method get_Priority, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::ChannelPriority get_Priority() ;

/// @brief Method get_TransmitPriority, addr 0x1805c5570, size 0x40, virtual false, abstract: false, final false
inline ::Dissonance::ChannelPriority get_TransmitPriority() ;

/// @brief Method set_AmplitudeMultiplier, addr 0x1805c55b0, size 0x20, virtual false, abstract: false, final false
inline void set_AmplitudeMultiplier(float_t  value) ;

/// @brief Method set_Id, addr 0x1805c55d0, size 0x10, virtual false, abstract: false, final false
inline void set_Id(uint16_t  value) ;

/// @brief Method set_Positional, addr 0x1805c55e0, size 0x10, virtual false, abstract: false, final false
inline void set_Positional(bool  value) ;

/// @brief Method set_Priority, addr 0x1802f43d0, size 0x10, virtual false, abstract: false, final false
inline void set_Priority(::Dissonance::ChannelPriority  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChannelProperties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChannelProperties", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChannelProperties(ChannelProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChannelProperties", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChannelProperties(ChannelProperties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16782};

/// @brief Field _defaultPriority, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Audio::Capture::IChannelPriorityProvider*  ____defaultPriority;

/// @brief Field <Id>k__BackingField, offset: 0x18, size: 0x2, def value: None
 uint16_t  ____Id_k__BackingField;

/// @brief Field <Positional>k__BackingField, offset: 0x1a, size: 0x1, def value: None
 bool  ____Positional_k__BackingField;

/// @brief Field <Priority>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 ::Dissonance::ChannelPriority  ____Priority_k__BackingField;

/// @brief Field _amplitudeMultiplier, offset: 0x20, size: 0x4, def value: None
 float_t  ____amplitudeMultiplier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::ChannelProperties, ____defaultPriority) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::ChannelProperties, ____Id_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::ChannelProperties, ____Positional_k__BackingField) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::Dissonance::ChannelProperties, ____Priority_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::ChannelProperties, ____amplitudeMultiplier) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Dissonance::ChannelProperties) == 0x28, "Size mismatch!");

} // namespace end def Dissonance
