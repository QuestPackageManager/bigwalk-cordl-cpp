#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/ObjectInstanceTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectInstanceTracker)
namespace Rewired::Utils::Classes::Utility {
template<typename T>
class ObjectInstanceTracker_Wrapper_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Utility {
class ObjectInstanceTracker;
}
namespace Rewired::Utils::Classes::Utility {
template<typename T>
class ObjectInstanceTracker_Wrapper_1;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*);
MARK_GEN_REF_T_PTR(::Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*, "Rewired.Utils.Classes.Utility", "ObjectInstanceTracker");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1, "Rewired.Utils.Classes.Utility", "ObjectInstanceTracker/Wrapper`1");
// Dependencies System.Object
namespace Rewired::Utils::Classes::Utility {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Rewired.Utils.Classes.Utility.ObjectInstanceTracker/Wrapper`1<T>
class CORDL_TYPE ObjectInstanceTracker_Wrapper_1 : public ::System::Object {
public:
// Declarations
/// @brief Field GbHieTdhxXfBnFyBgpKhidhpAIJYB, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_GbHieTdhxXfBnFyBgpKhidhpAIJYB, put=__cordl_internal_set_GbHieTdhxXfBnFyBgpKhidhpAIJYB)) ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*  GbHieTdhxXfBnFyBgpKhidhpAIJYB;

/// @brief Field WbClrloVEDwNFsUdEbeRUybHNhzg, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_WbClrloVEDwNFsUdEbeRUybHNhzg, put=__cordl_internal_set_WbClrloVEDwNFsUdEbeRUybHNhzg)) bool  WbClrloVEDwNFsUdEbeRUybHNhzg;

/// @brief Field instance, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_instance, put=__cordl_internal_set_instance)) T  instance;

/// @brief Field instanceId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_instanceId, put=__cordl_internal_set_instanceId)) uint32_t  instanceId;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>* New_ctor(T  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>* New_ctor(T  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker* const& __cordl_internal_get_GbHieTdhxXfBnFyBgpKhidhpAIJYB() const;

constexpr ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*& __cordl_internal_get_GbHieTdhxXfBnFyBgpKhidhpAIJYB() ;

constexpr bool const& __cordl_internal_get_WbClrloVEDwNFsUdEbeRUybHNhzg() const;

constexpr bool& __cordl_internal_get_WbClrloVEDwNFsUdEbeRUybHNhzg() ;

constexpr T const& __cordl_internal_get_instance() const;

constexpr T& __cordl_internal_get_instance() ;

constexpr uint32_t const& __cordl_internal_get_instanceId() const;

constexpr uint32_t& __cordl_internal_get_instanceId() ;

constexpr void __cordl_internal_set_GbHieTdhxXfBnFyBgpKhidhpAIJYB(::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*  value) ;

constexpr void __cordl_internal_set_WbClrloVEDwNFsUdEbeRUybHNhzg(bool  value) ;

constexpr void __cordl_internal_set_instance(T  value) ;

constexpr void __cordl_internal_set_instanceId(uint32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectInstanceTracker_Wrapper_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectInstanceTracker_Wrapper_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectInstanceTracker_Wrapper_1(ObjectInstanceTracker_Wrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectInstanceTracker_Wrapper_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectInstanceTracker_Wrapper_1(ObjectInstanceTracker_Wrapper_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2978};

/// @brief Field instance, offset: 0x10, size: 0x8, def value: None
 T  ___instance;

/// @brief Field instanceId, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___instanceId;

/// @brief Field GbHieTdhxXfBnFyBgpKhidhpAIJYB, offset: 0x20, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*  ___GbHieTdhxXfBnFyBgpKhidhpAIJYB;

/// @brief Field WbClrloVEDwNFsUdEbeRUybHNhzg, offset: 0x28, size: 0x1, def value: None
 bool  ___WbClrloVEDwNFsUdEbeRUybHNhzg;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Utility
// Dependencies System.Object
namespace Rewired::Utils::Classes::Utility {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Utility.ObjectInstanceTracker
class CORDL_TYPE ObjectInstanceTracker : public ::System::Object {
public:
// Declarations
template<typename T>
using Wrapper_1 = ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker_Wrapper_1<T>;

/// @brief Field EjJOMbSaSrYsYghfGmnteZHURnuv, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_EjJOMbSaSrYsYghfGmnteZHURnuv, put=__cordl_internal_set_EjJOMbSaSrYsYghfGmnteZHURnuv)) ::System::Object*  EjJOMbSaSrYsYghfGmnteZHURnuv;

/// @brief Field GcAchPgDfcwffQpjoolIdxpFQRDob, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_GcAchPgDfcwffQpjoolIdxpFQRDob, put=__cordl_internal_set_GcAchPgDfcwffQpjoolIdxpFQRDob)) ::System::Collections::Generic::Dictionary_2<uint32_t,::System::Object*>*  GcAchPgDfcwffQpjoolIdxpFQRDob;

/// @brief Field GrjanuCsKsvxmrezQPgMZYzdWHkgA, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_GrjanuCsKsvxmrezQPgMZYzdWHkgA, put=__cordl_internal_set_GrjanuCsKsvxmrezQPgMZYzdWHkgA)) int32_t  GrjanuCsKsvxmrezQPgMZYzdWHkgA;

/// @brief Field pZaSLhcSJSzpdvIDsxdTuiMoDMvl, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_pZaSLhcSJSzpdvIDsxdTuiMoDMvl, put=__cordl_internal_set_pZaSLhcSJSzpdvIDsxdTuiMoDMvl)) uint32_t  pZaSLhcSJSzpdvIDsxdTuiMoDMvl;

/// @brief Field upFFhammXXgaxnGMNrnJEntLFeER, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_upFFhammXXgaxnGMNrnJEntLFeER, put=setStaticF_upFFhammXXgaxnGMNrnJEntLFeER)) ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*  upFFhammXXgaxnGMNrnJEntLFeER;

/// @brief Field yXLuxiEZoZOjBFGCkgvBBpiqygOS, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_yXLuxiEZoZOjBFGCkgvBBpiqygOS, put=__cordl_internal_set_yXLuxiEZoZOjBFGCkgvBBpiqygOS)) bool  yXLuxiEZoZOjBFGCkgvBBpiqygOS;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x181930a50, size 0x60, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0x181930ab0, size 0x50, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker* New_ctor() ;

/// @brief Method Register, addr 0x181930b00, size 0x60, virtual false, abstract: false, final false
inline uint32_t Register(::System::Object*  instance) ;

/// @brief Method TryGetInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool TryGetInstance(uint32_t  instanceId, ::by_ref<T>  instance) ;

/// @brief Method Unregister, addr 0x181930b60, size 0xd0, virtual false, abstract: false, final false
inline void Unregister(uint32_t  instanceId) ;

constexpr ::System::Object* const& __cordl_internal_get_EjJOMbSaSrYsYghfGmnteZHURnuv() const;

constexpr ::System::Object*& __cordl_internal_get_EjJOMbSaSrYsYghfGmnteZHURnuv() ;

constexpr ::System::Collections::Generic::Dictionary_2<uint32_t,::System::Object*>* const& __cordl_internal_get_GcAchPgDfcwffQpjoolIdxpFQRDob() const;

constexpr ::System::Collections::Generic::Dictionary_2<uint32_t,::System::Object*>*& __cordl_internal_get_GcAchPgDfcwffQpjoolIdxpFQRDob() ;

constexpr int32_t const& __cordl_internal_get_GrjanuCsKsvxmrezQPgMZYzdWHkgA() const;

constexpr int32_t& __cordl_internal_get_GrjanuCsKsvxmrezQPgMZYzdWHkgA() ;

constexpr uint32_t const& __cordl_internal_get_pZaSLhcSJSzpdvIDsxdTuiMoDMvl() const;

constexpr uint32_t& __cordl_internal_get_pZaSLhcSJSzpdvIDsxdTuiMoDMvl() ;

constexpr bool const& __cordl_internal_get_yXLuxiEZoZOjBFGCkgvBBpiqygOS() const;

constexpr bool& __cordl_internal_get_yXLuxiEZoZOjBFGCkgvBBpiqygOS() ;

constexpr void __cordl_internal_set_EjJOMbSaSrYsYghfGmnteZHURnuv(::System::Object*  value) ;

constexpr void __cordl_internal_set_GcAchPgDfcwffQpjoolIdxpFQRDob(::System::Collections::Generic::Dictionary_2<uint32_t,::System::Object*>*  value) ;

constexpr void __cordl_internal_set_GrjanuCsKsvxmrezQPgMZYzdWHkgA(int32_t  value) ;

constexpr void __cordl_internal_set_pZaSLhcSJSzpdvIDsxdTuiMoDMvl(uint32_t  value) ;

constexpr void __cordl_internal_set_yXLuxiEZoZOjBFGCkgvBBpiqygOS(bool  value) ;

/// @brief Method .ctor, addr 0x181930c30, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker* getStaticF_upFFhammXXgaxnGMNrnJEntLFeER() ;

/// @brief Method get_Default, addr 0x181930ca0, size 0xc0, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Utility::ObjectInstanceTracker* get_Default() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_upFFhammXXgaxnGMNrnJEntLFeER(::Rewired::Utils::Classes::Utility::ObjectInstanceTracker*  value) ;

/// @brief Method tZHoIczEuIpqYtImbYoiCxDfTHry, addr 0x181930ab0, size 0x50, virtual false, abstract: false, final false
inline void tZHoIczEuIpqYtImbYoiCxDfTHry(bool  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectInstanceTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectInstanceTracker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectInstanceTracker(ObjectInstanceTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectInstanceTracker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectInstanceTracker(ObjectInstanceTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2979};

/// @brief Field GcAchPgDfcwffQpjoolIdxpFQRDob, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<uint32_t,::System::Object*>*  ___GcAchPgDfcwffQpjoolIdxpFQRDob;

/// @brief Field EjJOMbSaSrYsYghfGmnteZHURnuv, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___EjJOMbSaSrYsYghfGmnteZHURnuv;

/// @brief Field pZaSLhcSJSzpdvIDsxdTuiMoDMvl, offset: 0x20, size: 0x4, def value: None
 uint32_t  ___pZaSLhcSJSzpdvIDsxdTuiMoDMvl;

/// @brief Field GrjanuCsKsvxmrezQPgMZYzdWHkgA, offset: 0x24, size: 0x4, def value: None
 int32_t  ___GrjanuCsKsvxmrezQPgMZYzdWHkgA;

/// @brief Field yXLuxiEZoZOjBFGCkgvBBpiqygOS, offset: 0x28, size: 0x1, def value: None
 bool  ___yXLuxiEZoZOjBFGCkgvBBpiqygOS;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Utility::ObjectInstanceTracker, ___GcAchPgDfcwffQpjoolIdxpFQRDob) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ObjectInstanceTracker, ___EjJOMbSaSrYsYghfGmnteZHURnuv) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ObjectInstanceTracker, ___pZaSLhcSJSzpdvIDsxdTuiMoDMvl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ObjectInstanceTracker, ___GrjanuCsKsvxmrezQPgMZYzdWHkgA) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ObjectInstanceTracker, ___yXLuxiEZoZOjBFGCkgvBBpiqygOS) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Utility::ObjectInstanceTracker) == 0x30, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Utility
