#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/GenerateAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Getter_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Setter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GenerateAPI)
namespace WaveHarmonic::Crest {
struct Getter;
}
namespace WaveHarmonic::Crest {
struct Setter;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class GenerateAPI;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::GenerateAPI*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::GenerateAPI*, "WaveHarmonic.Crest", "GenerateAPI");
// Dependencies System.Attribute, WaveHarmonic.Crest.Getter, WaveHarmonic.Crest.Setter
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.GenerateAPI
class CORDL_TYPE GenerateAPI : public ::System::Attribute {
public:
// Declarations
/// @brief Field _Getter, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Getter, put=__cordl_internal_set__Getter)) ::WaveHarmonic::Crest::Getter  _Getter;

/// @brief Field _Name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name, put=__cordl_internal_set__Name)) ::StringW  _Name;

/// @brief Field _ScriptingSymbol, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ScriptingSymbol, put=__cordl_internal_set__ScriptingSymbol)) ::StringW  _ScriptingSymbol;

/// @brief Field _Setter, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Setter, put=__cordl_internal_set__Setter)) ::WaveHarmonic::Crest::Setter  _Setter;

static inline ::WaveHarmonic::Crest::GenerateAPI* New_ctor(::WaveHarmonic::Crest::Getter  getter, ::WaveHarmonic::Crest::Setter  setter, ::StringW  name, ::StringW  symbol) ;

static inline ::WaveHarmonic::Crest::GenerateAPI* New_ctor(::WaveHarmonic::Crest::Setter  setter, ::StringW  name, ::StringW  symbol) ;

constexpr ::WaveHarmonic::Crest::Getter const& __cordl_internal_get__Getter() const;

constexpr ::WaveHarmonic::Crest::Getter& __cordl_internal_get__Getter() ;

constexpr ::StringW const& __cordl_internal_get__Name() const;

constexpr ::StringW& __cordl_internal_get__Name() ;

constexpr ::StringW const& __cordl_internal_get__ScriptingSymbol() const;

constexpr ::StringW& __cordl_internal_get__ScriptingSymbol() ;

constexpr ::WaveHarmonic::Crest::Setter const& __cordl_internal_get__Setter() const;

constexpr ::WaveHarmonic::Crest::Setter& __cordl_internal_get__Setter() ;

constexpr void __cordl_internal_set__Getter(::WaveHarmonic::Crest::Getter  value) ;

constexpr void __cordl_internal_set__Name(::StringW  value) ;

constexpr void __cordl_internal_set__ScriptingSymbol(::StringW  value) ;

constexpr void __cordl_internal_set__Setter(::WaveHarmonic::Crest::Setter  value) ;

/// @brief Method .ctor, addr 0x181651a00, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::Getter  getter, ::WaveHarmonic::Crest::Setter  setter, ::StringW  name, ::StringW  symbol) ;

/// @brief Method .ctor, addr 0x182567840, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::Setter  setter, ::StringW  name, ::StringW  symbol) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GenerateAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GenerateAPI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenerateAPI(GenerateAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenerateAPI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenerateAPI(GenerateAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20080};

/// @brief Field _Getter, offset: 0x10, size: 0x4, def value: None
 ::WaveHarmonic::Crest::Getter  ____Getter;

/// @brief Field _Setter, offset: 0x14, size: 0x4, def value: None
 ::WaveHarmonic::Crest::Setter  ____Setter;

/// @brief Field _Name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Name;

/// @brief Field _ScriptingSymbol, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____ScriptingSymbol;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::GenerateAPI, ____Getter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::GenerateAPI, ____Setter) == 0x14, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::GenerateAPI, ____Name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::GenerateAPI, ____ScriptingSymbol) == 0x20, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::GenerateAPI) == 0x28, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
