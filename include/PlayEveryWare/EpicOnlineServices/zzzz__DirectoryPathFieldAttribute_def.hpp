#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/DirectoryPathFieldAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayEveryWare/EpicOnlineServices/zzzz__ConfigFieldAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DirectoryPathFieldAttribute)
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class DirectoryPathFieldAttribute;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::DirectoryPathFieldAttribute*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::DirectoryPathFieldAttribute*, "PlayEveryWare.EpicOnlineServices", "DirectoryPathFieldAttribute");
// Dependencies PlayEveryWare.EpicOnlineServices.ConfigFieldAttribute
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.DirectoryPathFieldAttribute
class CORDL_TYPE DirectoryPathFieldAttribute : public ::PlayEveryWare::EpicOnlineServices::ConfigFieldAttribute {
public:
// Declarations
static inline ::PlayEveryWare::EpicOnlineServices::DirectoryPathFieldAttribute* New_ctor(::StringW  label, ::StringW  tooltip, int32_t  group) ;

/// @brief Method .ctor, addr 0x180537700, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::StringW  label, ::StringW  tooltip, int32_t  group) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DirectoryPathFieldAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DirectoryPathFieldAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectoryPathFieldAttribute(DirectoryPathFieldAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectoryPathFieldAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectoryPathFieldAttribute(DirectoryPathFieldAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18815};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::DirectoryPathFieldAttribute) == 0x38, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
