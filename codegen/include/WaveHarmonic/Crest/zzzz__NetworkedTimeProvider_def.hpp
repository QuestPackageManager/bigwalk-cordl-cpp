#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/NetworkedTimeProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__TimeProvider_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NetworkedTimeProvider)
namespace WaveHarmonic::Crest {
class DefaultTimeProvider;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class NetworkedTimeProvider;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::NetworkedTimeProvider*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::NetworkedTimeProvider*, "WaveHarmonic.Crest", "NetworkedTimeProvider");
// Dependencies WaveHarmonic.Crest.TimeProvider
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.NetworkedTimeProvider
class CORDL_TYPE NetworkedTimeProvider : public ::WaveHarmonic::Crest::TimeProvider {
public:
// Declarations
 __declspec(property(get=get_Delta)) float_t  Delta;

 __declspec(property(get=get_Time)) float_t  Time;

 __declspec(property(get=get_TimeOffsetToServer, put=set_TimeOffsetToServer)) float_t  TimeOffsetToServer;

/// @brief Field _DefaultTimeProvider, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__DefaultTimeProvider, put=__cordl_internal_set__DefaultTimeProvider)) ::WaveHarmonic::Crest::DefaultTimeProvider*  _DefaultTimeProvider;

/// @brief Field <TimeOffsetToServer>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__TimeOffsetToServer_k__BackingField, put=__cordl_internal_set__TimeOffsetToServer_k__BackingField)) float_t  _TimeOffsetToServer_k__BackingField;

static inline ::WaveHarmonic::Crest::NetworkedTimeProvider* New_ctor() ;

constexpr ::WaveHarmonic::Crest::DefaultTimeProvider* const& __cordl_internal_get__DefaultTimeProvider() const;

constexpr ::WaveHarmonic::Crest::DefaultTimeProvider*& __cordl_internal_get__DefaultTimeProvider() ;

constexpr float_t const& __cordl_internal_get__TimeOffsetToServer_k__BackingField() const;

constexpr float_t& __cordl_internal_get__TimeOffsetToServer_k__BackingField() ;

constexpr void __cordl_internal_set__DefaultTimeProvider(::WaveHarmonic::Crest::DefaultTimeProvider*  value) ;

constexpr void __cordl_internal_set__TimeOffsetToServer_k__BackingField(float_t  value) ;

/// @brief Method .ctor, addr 0x1825a2d10, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Delta, addr 0x1825a2d50, size 0x20, virtual true, abstract: false, final false
inline float_t get_Delta() ;

/// @brief Method get_Time, addr 0x1825a2d70, size 0x30, virtual true, abstract: false, final false
inline float_t get_Time() ;

/// @brief Method get_TimeOffsetToServer, addr 0x180356140, size 0x10, virtual false, abstract: false, final false
inline float_t get_TimeOffsetToServer() ;

/// @brief Method set_TimeOffsetToServer, addr 0x1803561c0, size 0x10, virtual false, abstract: false, final false
inline void set_TimeOffsetToServer(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkedTimeProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkedTimeProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkedTimeProvider(NetworkedTimeProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkedTimeProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkedTimeProvider(NetworkedTimeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16699};

/// @brief Field <TimeOffsetToServer>k__BackingField, offset: 0x50, size: 0x4, def value: None
 float_t  ____TimeOffsetToServer_k__BackingField;

/// @brief Field _DefaultTimeProvider, offset: 0x58, size: 0x8, def value: None
 ::WaveHarmonic::Crest::DefaultTimeProvider*  ____DefaultTimeProvider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::NetworkedTimeProvider, ____TimeOffsetToServer_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::NetworkedTimeProvider, ____DefaultTimeProvider) == 0x58, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::NetworkedTimeProvider) == 0x60, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
