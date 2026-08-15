#pragma once
// IWYU pragma private; include "GlobalNamespace/IAudioFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IAudioFilter)
// Forward declare root types
namespace GlobalNamespace {
class IAudioFilter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IAudioFilter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IAudioFilter*, "", "IAudioFilter");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IAudioFilter
class CORDL_TYPE IAudioFilter {
public:
// Declarations
 __declspec(property(get=get_Bypass, put=set_Bypass)) bool  Bypass;

 __declspec(property(get=get_InternalBypass, put=set_InternalBypass)) bool  InternalBypass;

/// @brief Method ProcessSamples, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels) ;

/// @brief Method UpdateVariables, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UpdateVariables(float_t  deltaTime) ;

/// @brief Method get_Bypass, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_Bypass() ;

/// @brief Method get_InternalBypass, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_InternalBypass() ;

/// @brief Method set_Bypass, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_Bypass(bool  value) ;

/// @brief Method set_InternalBypass, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_InternalBypass(bool  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IAudioFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioFilter(IAudioFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17597};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
