#pragma once
// IWYU pragma private; include "GlobalNamespace/IAudioRTPCXProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IAudioRTPCXProvider)
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
// Forward declare root types
namespace GlobalNamespace {
class IAudioRTPCXProvider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IAudioRTPCXProvider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IAudioRTPCXProvider*, "", "IAudioRTPCXProvider");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IAudioRTPCXProvider
class CORDL_TYPE IAudioRTPCXProvider {
public:
// Declarations
 __declspec(property(get=get_XProviderIdentifier)) ::StringW  XProviderIdentifier;

/// @brief Method GetX, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

/// @brief Method get_XProviderIdentifier, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_XProviderIdentifier() ;

// Ctor Parameters [CppParam { name: "", ty: "IAudioRTPCXProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioRTPCXProvider(IAudioRTPCXProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17556};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
