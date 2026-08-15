#pragma once
// IWYU pragma private; include "Rewired/Utils/MiscTools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MiscTools)
namespace Rewired::Utils::Classes::Data {
struct Bytes20;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils {
class MiscTools;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::MiscTools*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::MiscTools*, "Rewired.Utils", "MiscTools");
// Dependencies System.Object
namespace Rewired::Utils {
// Is value type: false
// CS Name: Rewired.Utils.MiscTools
class CORDL_TYPE MiscTools : public ::System::Object {
public:
// Declarations
/// @brief Field CqfpUuSHysIEkLtzomTCODwkhZjA, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_CqfpUuSHysIEkLtzomTCODwkhZjA, put=setStaticF_CqfpUuSHysIEkLtzomTCODwkhZjA)) uint32_t  CqfpUuSHysIEkLtzomTCODwkhZjA;

/// @brief Field KCTBJVuKTseVjhdKVXbKivVweawY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_KCTBJVuKTseVjhdKVXbKivVweawY, put=setStaticF_KCTBJVuKTseVjhdKVXbKivVweawY)) uint32_t  KCTBJVuKTseVjhdKVXbKivVweawY;

/// @brief Field YnMuikzIPBURdhFysxCCqOUAaYrm, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_YnMuikzIPBURdhFysxCCqOUAaYrm, put=setStaticF_YnMuikzIPBURdhFysxCCqOUAaYrm)) int32_t  YnMuikzIPBURdhFysxCCqOUAaYrm;

/// @brief Field aBelfHrPoeEOWkkrekqyavGGaabQc, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_aBelfHrPoeEOWkkrekqyavGGaabQc, put=setStaticF_aBelfHrPoeEOWkkrekqyavGGaabQc)) int32_t  aBelfHrPoeEOWkkrekqyavGGaabQc;

/// @brief Field jhPiEMCJzmEAMJgJLFcHtFJAOttg, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_jhPiEMCJzmEAMJgJLFcHtFJAOttg, put=setStaticF_jhPiEMCJzmEAMJgJLFcHtFJAOttg)) uint32_t  jhPiEMCJzmEAMJgJLFcHtFJAOttg;

/// @brief Field yguUwvONUpJODBSDgANQBgBzuRUuA, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_yguUwvONUpJODBSDgANQBgBzuRUuA, put=setStaticF_yguUwvONUpJODBSDgANQBgBzuRUuA)) int32_t  yguUwvONUpJODBSDgANQBgBzuRUuA;

/// @brief Method Clone, addr 0x18190a5d0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Object* Clone(::System::Object*  obj) ;

/// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Clone(T  obj) ;

/// @brief Method CreateGuidHashSHA1, addr 0x18190a630, size 0x140, virtual false, abstract: false, final false
static inline ::System::Guid CreateGuidHashSHA1(::StringW  text) ;

/// @brief Method CreateGuidHashSHA256, addr 0x18190a770, size 0x100, virtual false, abstract: false, final false
static inline ::System::Guid CreateGuidHashSHA256(::StringW  text) ;

/// @brief Method CreateHIDProductGuid, addr 0x18190a870, size 0x90, virtual false, abstract: false, final false
static inline ::System::Guid CreateHIDProductGuid(int32_t  vendorId, int32_t  productId) ;

/// @brief Method DeepClone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> DeepClone(::ArrayW<T>  obj) ;

/// @brief Method DeepClone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TKey,typename TValue>
static inline ::System::Collections::Generic::Dictionary_2<TKey,TValue>* DeepClone(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  dictionary) ;

/// @brief Method DeepClone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* DeepClone(::System::Collections::Generic::List_1<T>*  obj) ;

/// @brief Method DeepClone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T DeepClone(T  obj) ;

/// @brief Method DeepClone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T DeepClone(T  obj, bool  createIfNull) ;

/// @brief Method HashSHA1, addr 0x18190a900, size 0x150, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Bytes20 HashSHA1(::StringW  text) ;

/// @brief Method IsTickNewer, addr 0x18190ab10, size 0x40, virtual false, abstract: false, final false
static inline bool IsTickNewer(int32_t  tick1, int32_t  tick2) ;

/// @brief Method IsTickNewer, addr 0x18190aad0, size 0x40, virtual false, abstract: false, final false
static inline bool IsTickNewer(uint32_t  tick1, uint32_t  tick2) ;

/// @brief Method IsTickNewerOrEqualTo, addr 0x18190aa50, size 0x40, virtual false, abstract: false, final false
static inline bool IsTickNewerOrEqualTo(int32_t  tick1, int32_t  tick2) ;

/// @brief Method IsTickNewerOrEqualTo, addr 0x18190aa90, size 0x40, virtual false, abstract: false, final false
static inline bool IsTickNewerOrEqualTo(uint32_t  tick1, uint32_t  tick2) ;

/// @brief Method IsTickValid, addr 0x18190ab70, size 0x20, virtual false, abstract: false, final false
static inline bool IsTickValid(int32_t  tick) ;

/// @brief Method IsTickValid, addr 0x18190ab50, size 0x20, virtual false, abstract: false, final false
static inline bool IsTickValid(uint32_t  tick) ;

/// @brief Method IsValidGuid, addr 0x18190ab90, size 0x30, virtual false, abstract: false, final false
static inline bool IsValidGuid(::StringW  guid) ;

/// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Swap(::by_ref<T>  a, ::by_ref<T>  b) ;

/// @brief Method Tick, addr 0x18190ad10, size 0x20, virtual false, abstract: false, final false
static inline int32_t Tick(int32_t  counter) ;

/// @brief Method Tick, addr 0x18190acf0, size 0x20, virtual false, abstract: false, final false
static inline uint32_t Tick(uint32_t  counter) ;

/// @brief Method TickDifference, addr 0x18190ac30, size 0x70, virtual false, abstract: false, final false
static inline int32_t TickDifference(int32_t  tick1, int32_t  tick2) ;

/// @brief Method TickDifference, addr 0x18190abc0, size 0x70, virtual false, abstract: false, final false
static inline int64_t TickDifference(uint32_t  tick1, uint32_t  tick2) ;

/// @brief Method TickPrev, addr 0x18190aca0, size 0x30, virtual false, abstract: false, final false
static inline int32_t TickPrev(int32_t  counter) ;

/// @brief Method TickPrev, addr 0x18190acd0, size 0x20, virtual false, abstract: false, final false
static inline uint32_t TickPrev(uint32_t  counter) ;

/// @brief Method ToLongUnchecked, addr 0x18190ad30, size 0x2f0, virtual false, abstract: false, final false
static inline int64_t ToLongUnchecked(::System::Object*  value) ;

static inline uint32_t getStaticF_CqfpUuSHysIEkLtzomTCODwkhZjA() ;

static inline uint32_t getStaticF_KCTBJVuKTseVjhdKVXbKivVweawY() ;

static inline int32_t getStaticF_YnMuikzIPBURdhFysxCCqOUAaYrm() ;

static inline int32_t getStaticF_aBelfHrPoeEOWkkrekqyavGGaabQc() ;

static inline uint32_t getStaticF_jhPiEMCJzmEAMJgJLFcHtFJAOttg() ;

static inline int32_t getStaticF_yguUwvONUpJODBSDgANQBgBzuRUuA() ;

static inline void setStaticF_CqfpUuSHysIEkLtzomTCODwkhZjA(uint32_t  value) ;

static inline void setStaticF_KCTBJVuKTseVjhdKVXbKivVweawY(uint32_t  value) ;

static inline void setStaticF_YnMuikzIPBURdhFysxCCqOUAaYrm(int32_t  value) ;

static inline void setStaticF_aBelfHrPoeEOWkkrekqyavGGaabQc(int32_t  value) ;

static inline void setStaticF_jhPiEMCJzmEAMJgJLFcHtFJAOttg(uint32_t  value) ;

static inline void setStaticF_yguUwvONUpJODBSDgANQBgBzuRUuA(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MiscTools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MiscTools", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MiscTools(MiscTools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MiscTools", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MiscTools(MiscTools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2922};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::MiscTools) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils
