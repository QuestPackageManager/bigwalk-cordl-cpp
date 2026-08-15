#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonStringContract.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__JsonPrimitiveContract_def.hpp"
CORDL_MODULE_EXPORT(JsonStringContract)
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonStringContract;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Serialization::JsonStringContract*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Serialization::JsonStringContract*, "Newtonsoft.Json.Serialization", "JsonStringContract");
// Dependencies Newtonsoft.Json.Serialization.JsonPrimitiveContract
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.JsonStringContract
class CORDL_TYPE JsonStringContract : public ::Newtonsoft::Json::Serialization::JsonPrimitiveContract {
public:
// Declarations
static inline ::Newtonsoft::Json::Serialization::JsonStringContract* New_ctor(::System::Type*  underlyingType) ;

/// @brief Method .ctor, addr 0x1817f9750, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  underlyingType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonStringContract() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonStringContract", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonStringContract(JsonStringContract && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonStringContract", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonStringContract(JsonStringContract const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13721};

/// @brief Size padding 0x98 - 0x90 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Newtonsoft::Json::Serialization::JsonStringContract) == 0x98, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
