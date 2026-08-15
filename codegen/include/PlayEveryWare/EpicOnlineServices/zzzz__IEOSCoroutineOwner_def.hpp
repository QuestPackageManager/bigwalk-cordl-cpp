#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/IEOSCoroutineOwner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEOSCoroutineOwner)
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class IEOSCoroutineOwner;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*, "PlayEveryWare.EpicOnlineServices", "IEOSCoroutineOwner");
// Dependencies 
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.IEOSCoroutineOwner
class CORDL_TYPE IEOSCoroutineOwner {
public:
// Declarations
/// @brief Method StartCoroutine, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void StartCoroutine(::System::Collections::IEnumerator*  routine) ;

// Ctor Parameters [CppParam { name: "", ty: "IEOSCoroutineOwner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEOSCoroutineOwner(IEOSCoroutineOwner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18897};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayEveryWare::EpicOnlineServices
