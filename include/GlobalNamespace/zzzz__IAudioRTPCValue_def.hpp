#pragma once
// IWYU pragma private; include "GlobalNamespace/IAudioRTPCValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAudioRTPCValue)
namespace GlobalNamespace {
struct AudioRTPCY;
}
namespace GlobalNamespace {
struct AudioRTPC_YAxisType;
}
namespace GlobalNamespace {
class IAudioRTPCXProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class IAudioRTPCValue;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IAudioRTPCValue*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IAudioRTPCValue*, "", "IAudioRTPCValue");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IAudioRTPCValue
class CORDL_TYPE IAudioRTPCValue {
public:
// Declarations
 __declspec(property(get=get_YAxis, put=set_YAxis)) ::GlobalNamespace::AudioRTPC_YAxisType  YAxis;

/// @brief Method GetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::GlobalNamespace::AudioRTPCY GetValue(::GlobalNamespace::IAudioRTPCXProvider*  xProvider) ;

/// @brief Method get_YAxis, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::GlobalNamespace::AudioRTPC_YAxisType get_YAxis() ;

/// @brief Method set_YAxis, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_YAxis(::GlobalNamespace::AudioRTPC_YAxisType  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IAudioRTPCValue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioRTPCValue(IAudioRTPCValue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17559};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
