#pragma once
// IWYU pragma private; include "PlayEveryWare/Common/Extensions/ListExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ListExtensions)
namespace PlayEveryWare::Common::Extensions {
class ListExtensions_ThreadSafeRandom;
}
namespace PlayEveryWare::Common::Extensions {
class ThreadSafeRandom_ListExtensions___c;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Threading {
template<typename T>
class ThreadLocal_1;
}
namespace System {
class Random;
}
// Forward declare root types
namespace PlayEveryWare::Common::Extensions {
class ListExtensions;
}
namespace PlayEveryWare::Common::Extensions {
class ListExtensions_ThreadSafeRandom;
}
namespace PlayEveryWare::Common::Extensions {
class ThreadSafeRandom_ListExtensions___c;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::Common::Extensions::ListExtensions*);
MARK_REF_T(::PlayEveryWare::Common::Extensions::ListExtensions_ThreadSafeRandom*);
MARK_REF_T(::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::Common::Extensions::ListExtensions*, "PlayEveryWare.Common.Extensions", "ListExtensions");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::Common::Extensions::ListExtensions_ThreadSafeRandom*, "PlayEveryWare.Common.Extensions", "ListExtensions/ThreadSafeRandom");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c*, "PlayEveryWare.Common.Extensions", "ListExtensions/ThreadSafeRandom/<>c");
// Dependencies System.Object
namespace PlayEveryWare::Common::Extensions {
// Is value type: false
// CS Name: PlayEveryWare.Common.Extensions.ListExtensions/ThreadSafeRandom/<>c
class CORDL_TYPE ThreadSafeRandom_ListExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c*  __9;

static inline ::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c* New_ctor() ;

/// @brief Method <.cctor>b__3_0, addr 0x180548f10, size 0x30, virtual false, abstract: false, final false
inline ::System::Random* __cctor_b__3_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c* getStaticF___9() ;

static inline void setStaticF___9(::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThreadSafeRandom_ListExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeRandom_ListExtensions___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadSafeRandom_ListExtensions___c(ThreadSafeRandom_ListExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeRandom_ListExtensions___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadSafeRandom_ListExtensions___c(ThreadSafeRandom_ListExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18800};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::Common::Extensions
// Dependencies System.Object
namespace PlayEveryWare::Common::Extensions {
// Is value type: false
// CS Name: PlayEveryWare.Common.Extensions.ListExtensions/ThreadSafeRandom
class CORDL_TYPE ListExtensions_ThreadSafeRandom : public ::System::Object {
public:
// Declarations
using __c = ::PlayEveryWare::Common::Extensions::ThreadSafeRandom_ListExtensions___c;

/// @brief Field threadLocalRandom, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_threadLocalRandom, put=setStaticF_threadLocalRandom)) ::System::Threading::ThreadLocal_1<::System::Random*>*  threadLocalRandom;

static inline ::System::Threading::ThreadLocal_1<::System::Random*>* getStaticF_threadLocalRandom() ;

/// @brief Method get_Instance, addr 0x180547530, size 0x50, virtual false, abstract: false, final false
static inline ::System::Random* get_Instance() ;

static inline void setStaticF_threadLocalRandom(::System::Threading::ThreadLocal_1<::System::Random*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListExtensions_ThreadSafeRandom() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListExtensions_ThreadSafeRandom", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ListExtensions_ThreadSafeRandom(ListExtensions_ThreadSafeRandom && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListExtensions_ThreadSafeRandom", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListExtensions_ThreadSafeRandom(ListExtensions_ThreadSafeRandom const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18801};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::Common::Extensions::ListExtensions_ThreadSafeRandom) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::Common::Extensions
// Dependencies System.Object
namespace PlayEveryWare::Common::Extensions {
// Is value type: false
// CS Name: PlayEveryWare.Common.Extensions.ListExtensions
class CORDL_TYPE ListExtensions : public ::System::Object {
public:
// Declarations
using ThreadSafeRandom = ::PlayEveryWare::Common::Extensions::ListExtensions_ThreadSafeRandom;

/// @brief Method Shuffle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Shuffle(::System::Collections::Generic::IList_1<T>*  list) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ListExtensions(ListExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListExtensions(ListExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18802};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::Common::Extensions::ListExtensions) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::Common::Extensions
