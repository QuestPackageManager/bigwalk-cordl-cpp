#pragma once
// IWYU pragma private; include "Rewired/ButtonStateRecorder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ButtonStateRecorder)
namespace Rewired {
class ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA;
}
// Forward declare root types
namespace Rewired {
class ButtonStateRecorder;
}
namespace Rewired {
class ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA;
}
// Write type traits
MARK_REF_T(::Rewired::ButtonStateRecorder*);
MARK_REF_T(::Rewired::ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA*);
DEFINE_IL2CPP_CLASS(::Rewired::ButtonStateRecorder*, "Rewired", "ButtonStateRecorder");
DEFINE_IL2CPP_CLASS(::Rewired::ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA*, "Rewired", "ButtonStateRecorder/OMVBHTIcNBinWzCYXEgQncXhaPfdA");
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ButtonStateRecorder/OMVBHTIcNBinWzCYXEgQncXhaPfdA
class CORDL_TYPE ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA : public ::System::Object {
public:
// Declarations
/// @brief Field TrsMEamsFuEjDGhYDMjISPxgzzRs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TrsMEamsFuEjDGhYDMjISPxgzzRs, put=__cordl_internal_set_TrsMEamsFuEjDGhYDMjISPxgzzRs)) double_t  TrsMEamsFuEjDGhYDMjISPxgzzRs;

/// @brief Field gVesstdrFTQRpigIQfROhpOxfKHsA, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_gVesstdrFTQRpigIQfROhpOxfKHsA, put=__cordl_internal_set_gVesstdrFTQRpigIQfROhpOxfKHsA)) bool  gVesstdrFTQRpigIQfROhpOxfKHsA;

/// @brief Method LgrRAmkEHVJbvZKNcpvLhYmePeBY, addr 0x181845c80, size 0x30, virtual false, abstract: false, final false
inline void LgrRAmkEHVJbvZKNcpvLhYmePeBY(::Rewired::ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA* New_ctor() ;

constexpr double_t const& __cordl_internal_get_TrsMEamsFuEjDGhYDMjISPxgzzRs() const;

constexpr double_t& __cordl_internal_get_TrsMEamsFuEjDGhYDMjISPxgzzRs() ;

constexpr bool const& __cordl_internal_get_gVesstdrFTQRpigIQfROhpOxfKHsA() const;

constexpr bool& __cordl_internal_get_gVesstdrFTQRpigIQfROhpOxfKHsA() ;

constexpr void __cordl_internal_set_TrsMEamsFuEjDGhYDMjISPxgzzRs(double_t  value) ;

constexpr void __cordl_internal_set_gVesstdrFTQRpigIQfROhpOxfKHsA(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method ecYchWkbeZcBfydgBDScThztUnTl, addr 0x181845cb0, size 0x10, virtual false, abstract: false, final false
inline void ecYchWkbeZcBfydgBDScThztUnTl() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA(ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA(ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1763};

/// @brief Field gVesstdrFTQRpigIQfROhpOxfKHsA, offset: 0x10, size: 0x1, def value: None
 bool  ___gVesstdrFTQRpigIQfROhpOxfKHsA;

/// @brief Field TrsMEamsFuEjDGhYDMjISPxgzzRs, offset: 0x18, size: 0x8, def value: None
 double_t  ___TrsMEamsFuEjDGhYDMjISPxgzzRs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA, ___gVesstdrFTQRpigIQfROhpOxfKHsA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA, ___TrsMEamsFuEjDGhYDMjISPxgzzRs) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA) == 0x20, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ButtonStateRecorder::OMVBHTIcNBinWzCYXEgQncXhaPfdA, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ButtonStateRecorder
class CORDL_TYPE ButtonStateRecorder : public ::System::Object {
public:
// Declarations
using OMVBHTIcNBinWzCYXEgQncXhaPfdA = ::Rewired::ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA;

 __declspec(property(get=pJQEIrpqwBBBzkLxQszMCOsPopXxA)) double_t  LfrzwcTvBzLBiYgjqIYNgVcLpVxCb;

/// @brief Field QqlAIEitSGpLnnbLWKYaavgqgvfkA, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_QqlAIEitSGpLnnbLWKYaavgqgvfkA, put=__cordl_internal_set_QqlAIEitSGpLnnbLWKYaavgqgvfkA)) int32_t  QqlAIEitSGpLnnbLWKYaavgqgvfkA;

 __declspec(property(get=pkhbLffEOcrrBQRLgcJqtfKlvXPT)) double_t  VIlpCwCefJErCeefWbvwDEOPruUyA;

 __declspec(property(get=nPceunmqxOYwsuevVKdmsKnXDqZQ)) double_t  XfDXkParbaVzlLNrQmnquupkZTKD;

 __declspec(property(get=YrElhYeFNIqmYVXhwTDOZQtxhlVb)) double_t  ZkcKWqwzuCHbvcwqUjlqYIBlWJNe;

 __declspec(property(get=VJxhtRjBaQxWJQezfjawumcyKMiP)) double_t  aRSJFytzcUErMTpGGEKabhKwubu;

/// @brief Field anvowYrdQDoPHUACfIMaEFFtouPR, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_anvowYrdQDoPHUACfIMaEFFtouPR, put=__cordl_internal_set_anvowYrdQDoPHUACfIMaEFFtouPR)) int32_t  anvowYrdQDoPHUACfIMaEFFtouPR;

/// @brief Field gCArxoIPkuJlmXwGSBYGUCWTGlwQ, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_gCArxoIPkuJlmXwGSBYGUCWTGlwQ, put=__cordl_internal_set_gCArxoIPkuJlmXwGSBYGUCWTGlwQ)) uint32_t  gCArxoIPkuJlmXwGSBYGUCWTGlwQ;

 __declspec(property(get=vVXKQlmEzSNocKEqDJBzVSgzidHf)) double_t  hXRSxqhWEgHHcZzWrQiawwxjNrht;

 __declspec(property(get=LnvZGwsGrIakeSjBEbeEBsqxXMENA)) double_t  hlqQQSxawhhBFCZyGtLzrjxDOcvG;

/// @brief Field tRLmpjqatynmmswMGWiKzaTebgLx, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tRLmpjqatynmmswMGWiKzaTebgLx, put=__cordl_internal_set_tRLmpjqatynmmswMGWiKzaTebgLx)) ::ArrayW<::Rewired::ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA*>  tRLmpjqatynmmswMGWiKzaTebgLx;

/// @brief Field uqBgMHWlEykgYagXbPAzsHzAadkIA, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_uqBgMHWlEykgYagXbPAzsHzAadkIA, put=__cordl_internal_set_uqBgMHWlEykgYagXbPAzsHzAadkIA)) ::ArrayW<::Rewired::ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA*>  uqBgMHWlEykgYagXbPAzsHzAadkIA;

/// @brief Method EQopRQWEqSWAlTQaKFbcPNNOvhhs, addr 0x181838df0, size 0x70, virtual false, abstract: false, final false
static inline bool EQopRQWEqSWAlTQaKFbcPNNOvhhs(::ArrayW<::Rewired::ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA*>  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method LnvZGwsGrIakeSjBEbeEBsqxXMENA, addr 0x181838e60, size 0x60, virtual false, abstract: false, final false
inline double_t LnvZGwsGrIakeSjBEbeEBsqxXMENA() ;

static inline ::Rewired::ButtonStateRecorder* New_ctor() ;

/// @brief Method VJxhtRjBaQxWJQezfjawumcyKMiP, addr 0x181838ec0, size 0x60, virtual false, abstract: false, final false
inline double_t VJxhtRjBaQxWJQezfjawumcyKMiP() ;

/// @brief Method YrElhYeFNIqmYVXhwTDOZQtxhlVb, addr 0x181838f20, size 0x80, virtual false, abstract: false, final false
inline double_t YrElhYeFNIqmYVXhwTDOZQtxhlVb() ;

/// @brief Method ZUDceQWnelwHQyNxsbtLBWojkoOvA, addr 0x181838fa0, size 0x1b0, virtual false, abstract: false, final false
inline void ZUDceQWnelwHQyNxsbtLBWojkoOvA(bool  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, double_t  _cordl_fixed_empty_name_whitespace_param_2) ;

constexpr int32_t const& __cordl_internal_get_QqlAIEitSGpLnnbLWKYaavgqgvfkA() const;

constexpr int32_t& __cordl_internal_get_QqlAIEitSGpLnnbLWKYaavgqgvfkA() ;

constexpr int32_t const& __cordl_internal_get_anvowYrdQDoPHUACfIMaEFFtouPR() const;

constexpr int32_t& __cordl_internal_get_anvowYrdQDoPHUACfIMaEFFtouPR() ;

constexpr uint32_t const& __cordl_internal_get_gCArxoIPkuJlmXwGSBYGUCWTGlwQ() const;

constexpr uint32_t& __cordl_internal_get_gCArxoIPkuJlmXwGSBYGUCWTGlwQ() ;

constexpr ::ArrayW<::Rewired::ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA*> const& __cordl_internal_get_tRLmpjqatynmmswMGWiKzaTebgLx() const;

constexpr ::ArrayW<::Rewired::ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA*>& __cordl_internal_get_tRLmpjqatynmmswMGWiKzaTebgLx() ;

constexpr ::ArrayW<::Rewired::ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA*> const& __cordl_internal_get_uqBgMHWlEykgYagXbPAzsHzAadkIA() const;

constexpr ::ArrayW<::Rewired::ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA*>& __cordl_internal_get_uqBgMHWlEykgYagXbPAzsHzAadkIA() ;

constexpr void __cordl_internal_set_QqlAIEitSGpLnnbLWKYaavgqgvfkA(int32_t  value) ;

constexpr void __cordl_internal_set_anvowYrdQDoPHUACfIMaEFFtouPR(int32_t  value) ;

constexpr void __cordl_internal_set_gCArxoIPkuJlmXwGSBYGUCWTGlwQ(uint32_t  value) ;

constexpr void __cordl_internal_set_tRLmpjqatynmmswMGWiKzaTebgLx(::ArrayW<::Rewired::ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA*>  value) ;

constexpr void __cordl_internal_set_uqBgMHWlEykgYagXbPAzsHzAadkIA(::ArrayW<::Rewired::ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA*>  value) ;

/// @brief Method .ctor, addr 0x181839150, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method kbZggtPqDcqIyhDBoGVToRXvahihA, addr 0x181839230, size 0x30, virtual false, abstract: false, final false
static inline int32_t kbZggtPqDcqIyhDBoGVToRXvahihA(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method lHSpykIHVieUGdMebfTcClXwtiSwA, addr 0x181839260, size 0x30, virtual false, abstract: false, final false
static inline int32_t lHSpykIHVieUGdMebfTcClXwtiSwA(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method mODkiEXMFAWbGcytEjgNByePLBaN, addr 0x181839290, size 0x80, virtual false, abstract: false, final false
inline bool mODkiEXMFAWbGcytEjgNByePLBaN(float_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method nPceunmqxOYwsuevVKdmsKnXDqZQ, addr 0x181839310, size 0x90, virtual false, abstract: false, final false
inline double_t nPceunmqxOYwsuevVKdmsKnXDqZQ() ;

/// @brief Method nclULZoyBVSOftPEclFbbIcAuXgN, addr 0x1818393a0, size 0x60, virtual false, abstract: false, final false
inline void nclULZoyBVSOftPEclFbbIcAuXgN() ;

/// @brief Method oBNnzfpFEidSmJTIUdkMoJBZodmr, addr 0x181839400, size 0x80, virtual false, abstract: false, final false
inline bool oBNnzfpFEidSmJTIUdkMoJBZodmr(float_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method okcfjniFTYKrCLtrsWYzcHkeGnuN, addr 0x181839480, size 0x20, virtual false, abstract: false, final false
inline void okcfjniFTYKrCLtrsWYzcHkeGnuN(double_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method pJQEIrpqwBBBzkLxQszMCOsPopXxA, addr 0x1818394a0, size 0x30, virtual false, abstract: false, final false
inline double_t pJQEIrpqwBBBzkLxQszMCOsPopXxA() ;

/// @brief Method pkhbLffEOcrrBQRLgcJqtfKlvXPT, addr 0x1818394d0, size 0x80, virtual false, abstract: false, final false
inline double_t pkhbLffEOcrrBQRLgcJqtfKlvXPT() ;

/// @brief Method vVXKQlmEzSNocKEqDJBzVSgzidHf, addr 0x181839550, size 0x90, virtual false, abstract: false, final false
inline double_t vVXKQlmEzSNocKEqDJBzVSgzidHf() ;

/// @brief Method wzLAgmMEYdzuGLFiRXmOXEJUTMVh, addr 0x1818395e0, size 0x60, virtual false, abstract: false, final false
inline void wzLAgmMEYdzuGLFiRXmOXEJUTMVh() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ButtonStateRecorder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ButtonStateRecorder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ButtonStateRecorder(ButtonStateRecorder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ButtonStateRecorder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ButtonStateRecorder(ButtonStateRecorder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1764};

/// @brief Field vJRzXTKiHbybLSpOSsTbKrxKzNEA offset 0xffffffff size 0x4
static constexpr int32_t  vJRzXTKiHbybLSpOSsTbKrxKzNEA{static_cast<int32_t>(0x3)};

/// @brief Field tRLmpjqatynmmswMGWiKzaTebgLx, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Rewired::ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA*>  ___tRLmpjqatynmmswMGWiKzaTebgLx;

/// @brief Field uqBgMHWlEykgYagXbPAzsHzAadkIA, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Rewired::ButtonStateRecorder_OMVBHTIcNBinWzCYXEgQncXhaPfdA*>  ___uqBgMHWlEykgYagXbPAzsHzAadkIA;

/// @brief Field anvowYrdQDoPHUACfIMaEFFtouPR, offset: 0x20, size: 0x4, def value: None
 int32_t  ___anvowYrdQDoPHUACfIMaEFFtouPR;

/// @brief Field QqlAIEitSGpLnnbLWKYaavgqgvfkA, offset: 0x24, size: 0x4, def value: None
 int32_t  ___QqlAIEitSGpLnnbLWKYaavgqgvfkA;

/// @brief Field gCArxoIPkuJlmXwGSBYGUCWTGlwQ, offset: 0x28, size: 0x4, def value: None
 uint32_t  ___gCArxoIPkuJlmXwGSBYGUCWTGlwQ;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ButtonStateRecorder, ___tRLmpjqatynmmswMGWiKzaTebgLx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ButtonStateRecorder, ___uqBgMHWlEykgYagXbPAzsHzAadkIA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ButtonStateRecorder, ___anvowYrdQDoPHUACfIMaEFFtouPR) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ButtonStateRecorder, ___QqlAIEitSGpLnnbLWKYaavgqgvfkA) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::ButtonStateRecorder, ___gCArxoIPkuJlmXwGSBYGUCWTGlwQ) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::ButtonStateRecorder) == 0x30, "Size mismatch!");

} // namespace end def Rewired
