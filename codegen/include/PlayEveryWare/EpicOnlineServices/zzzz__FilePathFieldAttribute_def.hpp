#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/FilePathFieldAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayEveryWare/EpicOnlineServices/zzzz__ConfigFieldAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FilePathFieldAttribute)
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class FilePathFieldAttribute;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute*, "PlayEveryWare.EpicOnlineServices", "FilePathFieldAttribute");
// Dependencies PlayEveryWare.EpicOnlineServices.ConfigFieldAttribute
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.FilePathFieldAttribute
class CORDL_TYPE FilePathFieldAttribute : public ::PlayEveryWare::EpicOnlineServices::ConfigFieldAttribute {
public:
// Declarations
 __declspec(property(get=get_Extension)) ::StringW  Extension;

/// @brief Field <Extension>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Extension_k__BackingField, put=__cordl_internal_set__Extension_k__BackingField)) ::StringW  _Extension_k__BackingField;

static inline ::PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute* New_ctor(::StringW  label, ::StringW  extension, ::StringW  tooltip, int32_t  group) ;

constexpr ::StringW const& __cordl_internal_get__Extension_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Extension_k__BackingField() ;

constexpr void __cordl_internal_set__Extension_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x18053fcc0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::StringW  label, ::StringW  extension, ::StringW  tooltip, int32_t  group) ;

/// @brief Method get_Extension, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Extension() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FilePathFieldAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FilePathFieldAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FilePathFieldAttribute(FilePathFieldAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FilePathFieldAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FilePathFieldAttribute(FilePathFieldAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18820};

/// @brief Field <Extension>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____Extension_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute, ____Extension_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::FilePathFieldAttribute) == 0x40, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
