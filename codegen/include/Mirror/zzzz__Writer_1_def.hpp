#pragma once
// IWYU pragma private; include "Mirror/Writer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Writer_1)
namespace Mirror {
class NetworkWriter;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace Mirror {
template<typename T>
class Writer_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Mirror::Writer_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Mirror::Writer_1, "Mirror", "Writer`1");
// Dependencies System.Object
namespace Mirror {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Mirror.Writer`1<T>
class CORDL_TYPE Writer_1 : public ::System::Object {
public:
// Declarations
/// @brief Field write, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_write, put=setStaticF_write)) ::System::Action_2<::Mirror::NetworkWriter*,T>*  write;

static inline ::System::Action_2<::Mirror::NetworkWriter*,T>* getStaticF_write() ;

static inline void setStaticF_write(::System::Action_2<::Mirror::NetworkWriter*,T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Writer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Writer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Writer_1(Writer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Writer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Writer_1(Writer_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18345};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror
