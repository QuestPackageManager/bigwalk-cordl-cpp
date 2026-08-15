#pragma once
// IWYU pragma private; include "GlobalNamespace/IVoiceDataProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IVoiceDataProvider)
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class IVoiceDataProvider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IVoiceDataProvider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IVoiceDataProvider*, "", "IVoiceDataProvider");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IVoiceDataProvider
class CORDL_TYPE IVoiceDataProvider {
public:
// Declarations
 __declspec(property(get=get_CachedVoiceData)) ::ArrayW<float_t>  CachedVoiceData;

 __declspec(property(get=get_CachedVoiceWriteHead)) int32_t  CachedVoiceWriteHead;

 __declspec(property(get=get_RecommendedVoiceReadHead)) int32_t  RecommendedVoiceReadHead;

/// @brief Method add_OnWriteHeadJump, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_OnWriteHeadJump(::System::Action*  value) ;

/// @brief Method get_CachedVoiceData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<float_t> get_CachedVoiceData() ;

/// @brief Method get_CachedVoiceWriteHead, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_CachedVoiceWriteHead() ;

/// @brief Method get_RecommendedVoiceReadHead, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_RecommendedVoiceReadHead() ;

/// @brief Method remove_OnWriteHeadJump, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_OnWriteHeadJump(::System::Action*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IVoiceDataProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVoiceDataProvider(IVoiceDataProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16766};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
