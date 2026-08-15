#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Utility/FilePath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FilePath)
// Forward declare root types
namespace WaveHarmonic::Crest::Utility {
class FilePath;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Utility::FilePath*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Utility::FilePath*, "WaveHarmonic.Crest.Utility", "FilePath");
// Dependencies System.Attribute
namespace WaveHarmonic::Crest::Utility {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Utility.FilePath
class CORDL_TYPE FilePath : public ::System::Attribute {
public:
// Declarations
/// @brief Field _Path, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Path, put=__cordl_internal_set__Path)) ::StringW  _Path;

static inline ::WaveHarmonic::Crest::Utility::FilePath* New_ctor(::StringW  path) ;

constexpr ::StringW const& __cordl_internal_get__Path() const;

constexpr ::StringW& __cordl_internal_get__Path() ;

constexpr void __cordl_internal_set__Path(::StringW  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  path) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FilePath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FilePath", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FilePath(FilePath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FilePath", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FilePath(FilePath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20169};

/// @brief Field _Path, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Path;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Utility::FilePath, ____Path) == 0x10, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Utility::FilePath) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Utility
