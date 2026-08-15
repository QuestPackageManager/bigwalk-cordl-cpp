#pragma once
// IWYU pragma private; include "Rewired/Utils/EmptyObjects_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(EmptyObjects_1)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace Rewired::Utils {
template<typename T>
class EmptyObjects_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::EmptyObjects_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::EmptyObjects_1, "Rewired.Utils", "EmptyObjects`1");
// Dependencies System.Object
namespace Rewired::Utils {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Rewired.Utils.EmptyObjects`1<T>
class CORDL_TYPE EmptyObjects_1 : public ::System::Object {
public:
// Declarations
/// @brief Field JWiCtfXFbDaVonKlTvgVbsSwFyTD, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_JWiCtfXFbDaVonKlTvgVbsSwFyTD, put=setStaticF_JWiCtfXFbDaVonKlTvgVbsSwFyTD)) ::System::Collections::Generic::IList_1<T>*  JWiCtfXFbDaVonKlTvgVbsSwFyTD;

/// @brief Field KBHNurFTcjoSqFOHmkzihKxFaQMe, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_KBHNurFTcjoSqFOHmkzihKxFaQMe, put=setStaticF_KBHNurFTcjoSqFOHmkzihKxFaQMe)) ::ArrayW<T>  KBHNurFTcjoSqFOHmkzihKxFaQMe;

static inline ::System::Collections::Generic::IList_1<T>* getStaticF_JWiCtfXFbDaVonKlTvgVbsSwFyTD() ;

static inline ::ArrayW<T> getStaticF_KBHNurFTcjoSqFOHmkzihKxFaQMe() ;

/// @brief Method get_EmptyReadOnlyIListT, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IList_1<T>* get_EmptyReadOnlyIListT() ;

/// @brief Method get_array, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::ArrayW<T> get_array() ;

static inline void setStaticF_JWiCtfXFbDaVonKlTvgVbsSwFyTD(::System::Collections::Generic::IList_1<T>*  value) ;

static inline void setStaticF_KBHNurFTcjoSqFOHmkzihKxFaQMe(::ArrayW<T>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EmptyObjects_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EmptyObjects_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyObjects_1(EmptyObjects_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyObjects_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyObjects_1(EmptyObjects_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2893};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils
