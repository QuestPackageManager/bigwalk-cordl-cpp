#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Utility/EnumUtility_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EnumUtility_1)
namespace PlayEveryWare::EpicOnlineServices::Utility {
template<typename TEnum>
class EnumUtility_1___c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices::Utility {
template<typename TEnum>
class EnumUtility_1;
}
namespace PlayEveryWare::EpicOnlineServices::Utility {
template<typename TEnum>
class EnumUtility_1___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::PlayEveryWare::EpicOnlineServices::Utility::EnumUtility_1);
MARK_GEN_REF_T_PTR(::PlayEveryWare::EpicOnlineServices::Utility::EnumUtility_1___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::PlayEveryWare::EpicOnlineServices::Utility::EnumUtility_1, "PlayEveryWare.EpicOnlineServices.Utility", "EnumUtility`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::PlayEveryWare::EpicOnlineServices::Utility::EnumUtility_1___c, "PlayEveryWare.EpicOnlineServices.Utility", "EnumUtility`1/<>c");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices::Utility {
// cpp template
template<typename TEnum>
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.Utility.EnumUtility`1/<>c<TEnum>
class CORDL_TYPE EnumUtility_1___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::PlayEveryWare::EpicOnlineServices::Utility::EnumUtility_1___c<TEnum>*  __9;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::System::Func_3<::System::Object*,::System::Object*,bool>*  __9__4_0;

/// @brief Field <>9__5_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__5_0, put=setStaticF___9__5_0)) ::System::Func_3<::System::Object*,::System::Object*,bool>*  __9__5_0;

static inline ::PlayEveryWare::EpicOnlineServices::Utility::EnumUtility_1___c<TEnum>* New_ctor() ;

/// @brief Method <GetHighest>b__5_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _GetHighest_b__5_0(::System::Object*  current, ::System::Object*  extreme) ;

/// @brief Method <GetLowest>b__4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _GetLowest_b__4_0(::System::Object*  current, ::System::Object*  extreme) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::PlayEveryWare::EpicOnlineServices::Utility::EnumUtility_1___c<TEnum>* getStaticF___9() ;

static inline ::System::Func_3<::System::Object*,::System::Object*,bool>* getStaticF___9__4_0() ;

static inline ::System::Func_3<::System::Object*,::System::Object*,bool>* getStaticF___9__5_0() ;

static inline void setStaticF___9(::PlayEveryWare::EpicOnlineServices::Utility::EnumUtility_1___c<TEnum>*  value) ;

static inline void setStaticF___9__4_0(::System::Func_3<::System::Object*,::System::Object*,bool>*  value) ;

static inline void setStaticF___9__5_0(::System::Func_3<::System::Object*,::System::Object*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumUtility_1___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumUtility_1___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumUtility_1___c(EnumUtility_1___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumUtility_1___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumUtility_1___c(EnumUtility_1___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18937};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayEveryWare::EpicOnlineServices::Utility
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices::Utility {
// cpp template
template<typename TEnum>
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.Utility.EnumUtility`1<TEnum>
class CORDL_TYPE EnumUtility_1 : public ::System::Object {
public:
// Declarations
using __c = ::PlayEveryWare::EpicOnlineServices::Utility::EnumUtility_1___c<TEnum>;

/// @brief Method Combine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline TEnum Combine(TEnum  current, TEnum  toAdd) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<TEnum>* GetEnumerator(TEnum  bitFlag) ;

/// @brief Method GetExtreme, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline TEnum GetExtreme(::System::Func_3<::System::Object*,::System::Object*,bool>*  comparison) ;

/// @brief Method GetHighest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline TEnum GetHighest() ;

/// @brief Method GetLowest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline TEnum GetLowest() ;

/// @brief Method TryParse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool TryParse(::StringW  enumValueString, ::System::Collections::Generic::IDictionary_2<::StringW,TEnum>*  customMappings, ::by_ref<TEnum>  result, TEnum  defaultValue) ;

/// @brief Method TryParse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool TryParse(::System::Collections::Generic::IList_1<::StringW>*  enumValuesAsStrings, ::System::Collections::Generic::IDictionary_2<::StringW,TEnum>*  customMappings, ::by_ref<TEnum>  result, TEnum  defaultValue) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumUtility_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumUtility_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumUtility_1(EnumUtility_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumUtility_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumUtility_1(EnumUtility_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18938};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayEveryWare::EpicOnlineServices::Utility
