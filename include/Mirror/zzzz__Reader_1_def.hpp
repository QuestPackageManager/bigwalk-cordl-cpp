#pragma once
// IWYU pragma private; include "Mirror/Reader_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Reader_1)
namespace Mirror {
class NetworkReader;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Mirror {
template<typename T>
class Reader_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Mirror::Reader_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Mirror::Reader_1, "Mirror", "Reader`1");
// Dependencies System.Object
namespace Mirror {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Mirror.Reader`1<T>
class CORDL_TYPE Reader_1 : public ::System::Object {
public:
// Declarations
/// @brief Field read, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_read, put=setStaticF_read)) ::System::Func_2<::Mirror::NetworkReader*,T>*  read;

static inline ::System::Func_2<::Mirror::NetworkReader*,T>* getStaticF_read() ;

static inline void setStaticF_read(::System::Func_2<::Mirror::NetworkReader*,T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Reader_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Reader_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Reader_1(Reader_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Reader_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Reader_1(Reader_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18334};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror
