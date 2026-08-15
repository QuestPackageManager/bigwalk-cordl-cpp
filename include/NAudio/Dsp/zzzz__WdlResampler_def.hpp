#pragma once
// IWYU pragma private; include "NAudio/Dsp/WdlResampler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WdlResampler)
namespace NAudio::Dsp {
class WdlResampler_WDL_Resampler_IIRFilter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace NAudio::Dsp {
class WdlResampler;
}
namespace NAudio::Dsp {
class WdlResampler_WDL_Resampler_IIRFilter;
}
// Write type traits
MARK_REF_T(::NAudio::Dsp::WdlResampler*);
MARK_REF_T(::NAudio::Dsp::WdlResampler_WDL_Resampler_IIRFilter*);
DEFINE_IL2CPP_CLASS(::NAudio::Dsp::WdlResampler*, "NAudio.Dsp", "WdlResampler");
DEFINE_IL2CPP_CLASS(::NAudio::Dsp::WdlResampler_WDL_Resampler_IIRFilter*, "NAudio.Dsp", "WdlResampler/WDL_Resampler_IIRFilter");
// Dependencies System.Object
namespace NAudio::Dsp {
// Is value type: false
// CS Name: NAudio.Dsp.WdlResampler/WDL_Resampler_IIRFilter
class CORDL_TYPE WdlResampler_WDL_Resampler_IIRFilter : public ::System::Object {
public:
// Declarations
/// @brief Field m_a1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_a1, put=__cordl_internal_set_m_a1)) double_t  m_a1;

/// @brief Field m_a2, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_a2, put=__cordl_internal_set_m_a2)) double_t  m_a2;

/// @brief Field m_b0, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_b0, put=__cordl_internal_set_m_b0)) double_t  m_b0;

/// @brief Field m_b1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_b1, put=__cordl_internal_set_m_b1)) double_t  m_b1;

/// @brief Field m_b2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_b2, put=__cordl_internal_set_m_b2)) double_t  m_b2;

/// @brief Field m_fpos, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_fpos, put=__cordl_internal_set_m_fpos)) double_t  m_fpos;

/// @brief Field m_hist, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_hist, put=__cordl_internal_set_m_hist)) ::System::Object*  m_hist;

/// @brief Method Apply, addr 0x1805d4c90, size 0x2c0, virtual false, abstract: false, final false
inline void Apply(::ArrayW<float_t>  inBuffer, int32_t  inIndex, ::ArrayW<float_t>  outBuffer, int32_t  outIndex, int32_t  ns, int32_t  span, int32_t  w) ;

static inline ::NAudio::Dsp::WdlResampler_WDL_Resampler_IIRFilter* New_ctor() ;

/// @brief Method Reset, addr 0x1805d4f50, size 0x50, virtual false, abstract: false, final false
inline void Reset() ;

constexpr double_t const& __cordl_internal_get_m_a1() const;

constexpr double_t& __cordl_internal_get_m_a1() ;

constexpr double_t const& __cordl_internal_get_m_a2() const;

constexpr double_t& __cordl_internal_get_m_a2() ;

constexpr double_t const& __cordl_internal_get_m_b0() const;

constexpr double_t& __cordl_internal_get_m_b0() ;

constexpr double_t const& __cordl_internal_get_m_b1() const;

constexpr double_t& __cordl_internal_get_m_b1() ;

constexpr double_t const& __cordl_internal_get_m_b2() const;

constexpr double_t& __cordl_internal_get_m_b2() ;

constexpr double_t const& __cordl_internal_get_m_fpos() const;

constexpr double_t& __cordl_internal_get_m_fpos() ;

constexpr ::System::Object* const& __cordl_internal_get_m_hist() const;

constexpr ::System::Object*& __cordl_internal_get_m_hist() ;

constexpr void __cordl_internal_set_m_a1(double_t  value) ;

constexpr void __cordl_internal_set_m_a2(double_t  value) ;

constexpr void __cordl_internal_set_m_b0(double_t  value) ;

constexpr void __cordl_internal_set_m_b1(double_t  value) ;

constexpr void __cordl_internal_set_m_b2(double_t  value) ;

constexpr void __cordl_internal_set_m_fpos(double_t  value) ;

constexpr void __cordl_internal_set_m_hist(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x1805d4fa0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method denormal_filter, addr 0x1805d4ff0, size 0x10, virtual false, abstract: false, final false
inline double_t denormal_filter(double_t  x) ;

/// @brief Method denormal_filter, addr 0x1805d5000, size 0x10, virtual false, abstract: false, final false
inline double_t denormal_filter(float_t  x) ;

/// @brief Method setParms, addr 0x1805d5010, size 0xe0, virtual false, abstract: false, final false
inline void setParms(double_t  fpos, double_t  Q) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WdlResampler_WDL_Resampler_IIRFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WdlResampler_WDL_Resampler_IIRFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WdlResampler_WDL_Resampler_IIRFilter(WdlResampler_WDL_Resampler_IIRFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WdlResampler_WDL_Resampler_IIRFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WdlResampler_WDL_Resampler_IIRFilter(WdlResampler_WDL_Resampler_IIRFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16769};

/// @brief Field m_fpos, offset: 0x10, size: 0x8, def value: None
 double_t  ___m_fpos;

/// @brief Field m_a1, offset: 0x18, size: 0x8, def value: None
 double_t  ___m_a1;

/// @brief Field m_a2, offset: 0x20, size: 0x8, def value: None
 double_t  ___m_a2;

/// @brief Field m_b0, offset: 0x28, size: 0x8, def value: None
 double_t  ___m_b0;

/// @brief Field m_b1, offset: 0x30, size: 0x8, def value: None
 double_t  ___m_b1;

/// @brief Field m_b2, offset: 0x38, size: 0x8, def value: None
 double_t  ___m_b2;

/// @brief Field m_hist, offset: 0x40, size: 0x8, def value: None
 ::System::Object*  ___m_hist;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NAudio::Dsp::WdlResampler_WDL_Resampler_IIRFilter, ___m_fpos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler_WDL_Resampler_IIRFilter, ___m_a1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler_WDL_Resampler_IIRFilter, ___m_a2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler_WDL_Resampler_IIRFilter, ___m_b0) == 0x28, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler_WDL_Resampler_IIRFilter, ___m_b1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler_WDL_Resampler_IIRFilter, ___m_b2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler_WDL_Resampler_IIRFilter, ___m_hist) == 0x40, "Offset mismatch!");

static_assert(sizeof(::NAudio::Dsp::WdlResampler_WDL_Resampler_IIRFilter) == 0x48, "Size mismatch!");

} // namespace end def NAudio::Dsp
// Dependencies System.Object
namespace NAudio::Dsp {
// Is value type: false
// CS Name: NAudio.Dsp.WdlResampler
class CORDL_TYPE WdlResampler : public ::System::Object {
public:
// Declarations
using WDL_Resampler_IIRFilter = ::NAudio::Dsp::WdlResampler_WDL_Resampler_IIRFilter;

 __declspec(property(get=get_InputSampleRate)) double_t  InputSampleRate;

 __declspec(property(get=get_OutputSampleRate)) double_t  OutputSampleRate;

/// @brief Field m_feedmode, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_feedmode, put=__cordl_internal_set_m_feedmode)) bool  m_feedmode;

/// @brief Field m_filter_coeffs, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_filter_coeffs, put=__cordl_internal_set_m_filter_coeffs)) ::ArrayW<float_t>  m_filter_coeffs;

/// @brief Field m_filter_coeffs_size, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_filter_coeffs_size, put=__cordl_internal_set_m_filter_coeffs_size)) int32_t  m_filter_coeffs_size;

/// @brief Field m_filter_ratio, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_filter_ratio, put=__cordl_internal_set_m_filter_ratio)) double_t  m_filter_ratio;

/// @brief Field m_filtercnt, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_filtercnt, put=__cordl_internal_set_m_filtercnt)) int32_t  m_filtercnt;

/// @brief Field m_filterpos, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_filterpos, put=__cordl_internal_set_m_filterpos)) float_t  m_filterpos;

/// @brief Field m_filterq, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_filterq, put=__cordl_internal_set_m_filterq)) float_t  m_filterq;

/// @brief Field m_filtlatency, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_filtlatency, put=__cordl_internal_set_m_filtlatency)) int32_t  m_filtlatency;

/// @brief Field m_fracpos, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_fracpos, put=__cordl_internal_set_m_fracpos)) double_t  m_fracpos;

/// @brief Field m_iirfilter, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_iirfilter, put=__cordl_internal_set_m_iirfilter)) ::NAudio::Dsp::WdlResampler_WDL_Resampler_IIRFilter*  m_iirfilter;

/// @brief Field m_interp, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_interp, put=__cordl_internal_set_m_interp)) bool  m_interp;

/// @brief Field m_last_requested, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_last_requested, put=__cordl_internal_set_m_last_requested)) int32_t  m_last_requested;

/// @brief Field m_lp_oversize, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_lp_oversize, put=__cordl_internal_set_m_lp_oversize)) int32_t  m_lp_oversize;

/// @brief Field m_ratio, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ratio, put=__cordl_internal_set_m_ratio)) double_t  m_ratio;

/// @brief Field m_rsinbuf, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_rsinbuf, put=__cordl_internal_set_m_rsinbuf)) ::ArrayW<float_t>  m_rsinbuf;

/// @brief Field m_samples_in_rsinbuf, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_samples_in_rsinbuf, put=__cordl_internal_set_m_samples_in_rsinbuf)) int32_t  m_samples_in_rsinbuf;

/// @brief Field m_sincoversize, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_sincoversize, put=__cordl_internal_set_m_sincoversize)) int32_t  m_sincoversize;

/// @brief Field m_sincsize, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_sincsize, put=__cordl_internal_set_m_sincsize)) int32_t  m_sincsize;

/// @brief Field m_sratein, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_sratein, put=__cordl_internal_set_m_sratein)) double_t  m_sratein;

/// @brief Field m_srateout, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_srateout, put=__cordl_internal_set_m_srateout)) double_t  m_srateout;

/// @brief Method BuildLowPass, addr 0x1805d5d70, size 0x300, virtual false, abstract: false, final false
inline void BuildLowPass(double_t  filtpos) ;

/// @brief Method GetCurrentLatency, addr 0x1805d6070, size 0x30, virtual false, abstract: false, final false
inline double_t GetCurrentLatency() ;

static inline ::NAudio::Dsp::WdlResampler* New_ctor() ;

/// @brief Method ResampleOut, addr 0x1805d60a0, size 0xb90, virtual false, abstract: false, final false
inline int32_t ResampleOut(::ArrayW<float_t>  outBuffer, int32_t  outBufferIndex, int32_t  nsamples_in, int32_t  nsamples_out, int32_t  nch) ;

/// @brief Method ResamplePrepare, addr 0x1805d6c30, size 0x170, virtual false, abstract: false, final false
inline int32_t ResamplePrepare(int32_t  out_samples, int32_t  nch, ::by_ref<::ArrayW<float_t>>  inbuffer, ::by_ref<int32_t>  inbufferOffset) ;

/// @brief Method Reset, addr 0x1805d6da0, size 0x60, virtual false, abstract: false, final false
inline void Reset(double_t  fracpos) ;

/// @brief Method SetFeedMode, addr 0x1805d6e00, size 0x10, virtual false, abstract: false, final false
inline void SetFeedMode(bool  wantInputDriven) ;

/// @brief Method SetFilterParms, addr 0x1805d6e10, size 0x10, virtual false, abstract: false, final false
inline void SetFilterParms(float_t  filterpos, float_t  filterq) ;

/// @brief Method SetMode, addr 0x1805d6e20, size 0xe0, virtual false, abstract: false, final false
inline void SetMode(bool  interp, int32_t  filtercnt, bool  sinc, int32_t  sinc_size, int32_t  sinc_interpsize) ;

/// @brief Method SetRates, addr 0x1805d6f00, size 0x40, virtual false, abstract: false, final false
inline void SetRates(double_t  rate_in, double_t  rate_out) ;

/// @brief Method SincSample, addr 0x1805d7220, size 0x1a0, virtual false, abstract: false, final false
inline void SincSample(::ArrayW<float_t>  outBuffer, int32_t  outBufferIndex, ::ArrayW<float_t>  inBuffer, int32_t  inBufferIndex, double_t  fracpos, int32_t  nch, ::ArrayW<float_t>  filter, int32_t  filterIndex, int32_t  filtsz) ;

/// @brief Method SincSample1, addr 0x1805d6f40, size 0x110, virtual false, abstract: false, final false
inline void SincSample1(::ArrayW<float_t>  outBuffer, int32_t  outBufferIndex, ::ArrayW<float_t>  inBuffer, int32_t  inBufferIndex, double_t  fracpos, ::ArrayW<float_t>  filter, int32_t  filterIndex, int32_t  filtsz) ;

/// @brief Method SincSample2, addr 0x1805d7050, size 0x1d0, virtual false, abstract: false, final false
inline void SincSample2(::ArrayW<float_t>  outptr, int32_t  outBufferIndex, ::ArrayW<float_t>  inBuffer, int32_t  inBufferIndex, double_t  fracpos, ::ArrayW<float_t>  filter, int32_t  filterIndex, int32_t  filtsz) ;

constexpr bool const& __cordl_internal_get_m_feedmode() const;

constexpr bool& __cordl_internal_get_m_feedmode() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_filter_coeffs() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_filter_coeffs() ;

constexpr int32_t const& __cordl_internal_get_m_filter_coeffs_size() const;

constexpr int32_t& __cordl_internal_get_m_filter_coeffs_size() ;

constexpr double_t const& __cordl_internal_get_m_filter_ratio() const;

constexpr double_t& __cordl_internal_get_m_filter_ratio() ;

constexpr int32_t const& __cordl_internal_get_m_filtercnt() const;

constexpr int32_t& __cordl_internal_get_m_filtercnt() ;

constexpr float_t const& __cordl_internal_get_m_filterpos() const;

constexpr float_t& __cordl_internal_get_m_filterpos() ;

constexpr float_t const& __cordl_internal_get_m_filterq() const;

constexpr float_t& __cordl_internal_get_m_filterq() ;

constexpr int32_t const& __cordl_internal_get_m_filtlatency() const;

constexpr int32_t& __cordl_internal_get_m_filtlatency() ;

constexpr double_t const& __cordl_internal_get_m_fracpos() const;

constexpr double_t& __cordl_internal_get_m_fracpos() ;

constexpr ::NAudio::Dsp::WdlResampler_WDL_Resampler_IIRFilter* const& __cordl_internal_get_m_iirfilter() const;

constexpr ::NAudio::Dsp::WdlResampler_WDL_Resampler_IIRFilter*& __cordl_internal_get_m_iirfilter() ;

constexpr bool const& __cordl_internal_get_m_interp() const;

constexpr bool& __cordl_internal_get_m_interp() ;

constexpr int32_t const& __cordl_internal_get_m_last_requested() const;

constexpr int32_t& __cordl_internal_get_m_last_requested() ;

constexpr int32_t const& __cordl_internal_get_m_lp_oversize() const;

constexpr int32_t& __cordl_internal_get_m_lp_oversize() ;

constexpr double_t const& __cordl_internal_get_m_ratio() const;

constexpr double_t& __cordl_internal_get_m_ratio() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_rsinbuf() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_rsinbuf() ;

constexpr int32_t const& __cordl_internal_get_m_samples_in_rsinbuf() const;

constexpr int32_t& __cordl_internal_get_m_samples_in_rsinbuf() ;

constexpr int32_t const& __cordl_internal_get_m_sincoversize() const;

constexpr int32_t& __cordl_internal_get_m_sincoversize() ;

constexpr int32_t const& __cordl_internal_get_m_sincsize() const;

constexpr int32_t& __cordl_internal_get_m_sincsize() ;

constexpr double_t const& __cordl_internal_get_m_sratein() const;

constexpr double_t& __cordl_internal_get_m_sratein() ;

constexpr double_t const& __cordl_internal_get_m_srateout() const;

constexpr double_t& __cordl_internal_get_m_srateout() ;

constexpr void __cordl_internal_set_m_feedmode(bool  value) ;

constexpr void __cordl_internal_set_m_filter_coeffs(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_m_filter_coeffs_size(int32_t  value) ;

constexpr void __cordl_internal_set_m_filter_ratio(double_t  value) ;

constexpr void __cordl_internal_set_m_filtercnt(int32_t  value) ;

constexpr void __cordl_internal_set_m_filterpos(float_t  value) ;

constexpr void __cordl_internal_set_m_filterq(float_t  value) ;

constexpr void __cordl_internal_set_m_filtlatency(int32_t  value) ;

constexpr void __cordl_internal_set_m_fracpos(double_t  value) ;

constexpr void __cordl_internal_set_m_iirfilter(::NAudio::Dsp::WdlResampler_WDL_Resampler_IIRFilter*  value) ;

constexpr void __cordl_internal_set_m_interp(bool  value) ;

constexpr void __cordl_internal_set_m_last_requested(int32_t  value) ;

constexpr void __cordl_internal_set_m_lp_oversize(int32_t  value) ;

constexpr void __cordl_internal_set_m_ratio(double_t  value) ;

constexpr void __cordl_internal_set_m_rsinbuf(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_m_samples_in_rsinbuf(int32_t  value) ;

constexpr void __cordl_internal_set_m_sincoversize(int32_t  value) ;

constexpr void __cordl_internal_set_m_sincsize(int32_t  value) ;

constexpr void __cordl_internal_set_m_sratein(double_t  value) ;

constexpr void __cordl_internal_set_m_srateout(double_t  value) ;

/// @brief Method .ctor, addr 0x1805d73c0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InputSampleRate, addr 0x1805d7470, size 0x10, virtual false, abstract: false, final false
inline double_t get_InputSampleRate() ;

/// @brief Method get_OutputSampleRate, addr 0x1805d7480, size 0x10, virtual false, abstract: false, final false
inline double_t get_OutputSampleRate() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WdlResampler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WdlResampler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WdlResampler(WdlResampler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WdlResampler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WdlResampler(WdlResampler const& ) = delete;

/// @brief Field PI offset 0xffffffff size 0x8
static constexpr double_t  PI{static_cast<double_t>(3.1)};

/// @brief Field WDL_RESAMPLE_MAX_FILTERS offset 0xffffffff size 0x4
static constexpr int32_t  WDL_RESAMPLE_MAX_FILTERS{static_cast<int32_t>(0x4)};

/// @brief Field WDL_RESAMPLE_MAX_NCH offset 0xffffffff size 0x4
static constexpr int32_t  WDL_RESAMPLE_MAX_NCH{static_cast<int32_t>(0x40)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16770};

/// @brief Field m_sratein, offset: 0x10, size: 0x8, def value: None
 double_t  ___m_sratein;

/// @brief Field m_srateout, offset: 0x18, size: 0x8, def value: None
 double_t  ___m_srateout;

/// @brief Field m_fracpos, offset: 0x20, size: 0x8, def value: None
 double_t  ___m_fracpos;

/// @brief Field m_ratio, offset: 0x28, size: 0x8, def value: None
 double_t  ___m_ratio;

/// @brief Field m_filter_ratio, offset: 0x30, size: 0x8, def value: None
 double_t  ___m_filter_ratio;

/// @brief Field m_filterq, offset: 0x38, size: 0x4, def value: None
 float_t  ___m_filterq;

/// @brief Field m_filterpos, offset: 0x3c, size: 0x4, def value: None
 float_t  ___m_filterpos;

/// @brief Field m_rsinbuf, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_rsinbuf;

/// @brief Field m_filter_coeffs, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_filter_coeffs;

/// @brief Field m_iirfilter, offset: 0x50, size: 0x8, def value: None
 ::NAudio::Dsp::WdlResampler_WDL_Resampler_IIRFilter*  ___m_iirfilter;

/// @brief Field m_filter_coeffs_size, offset: 0x58, size: 0x4, def value: None
 int32_t  ___m_filter_coeffs_size;

/// @brief Field m_last_requested, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___m_last_requested;

/// @brief Field m_filtlatency, offset: 0x60, size: 0x4, def value: None
 int32_t  ___m_filtlatency;

/// @brief Field m_samples_in_rsinbuf, offset: 0x64, size: 0x4, def value: None
 int32_t  ___m_samples_in_rsinbuf;

/// @brief Field m_lp_oversize, offset: 0x68, size: 0x4, def value: None
 int32_t  ___m_lp_oversize;

/// @brief Field m_sincsize, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___m_sincsize;

/// @brief Field m_filtercnt, offset: 0x70, size: 0x4, def value: None
 int32_t  ___m_filtercnt;

/// @brief Field m_sincoversize, offset: 0x74, size: 0x4, def value: None
 int32_t  ___m_sincoversize;

/// @brief Field m_interp, offset: 0x78, size: 0x1, def value: None
 bool  ___m_interp;

/// @brief Field m_feedmode, offset: 0x79, size: 0x1, def value: None
 bool  ___m_feedmode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NAudio::Dsp::WdlResampler, ___m_sratein) == 0x10, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler, ___m_srateout) == 0x18, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler, ___m_fracpos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler, ___m_ratio) == 0x28, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler, ___m_filter_ratio) == 0x30, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler, ___m_filterq) == 0x38, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler, ___m_filterpos) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler, ___m_rsinbuf) == 0x40, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler, ___m_filter_coeffs) == 0x48, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler, ___m_iirfilter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler, ___m_filter_coeffs_size) == 0x58, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler, ___m_last_requested) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler, ___m_filtlatency) == 0x60, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler, ___m_samples_in_rsinbuf) == 0x64, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler, ___m_lp_oversize) == 0x68, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler, ___m_sincsize) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler, ___m_filtercnt) == 0x70, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler, ___m_sincoversize) == 0x74, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler, ___m_interp) == 0x78, "Offset mismatch!");

static_assert(offsetof(::NAudio::Dsp::WdlResampler, ___m_feedmode) == 0x79, "Offset mismatch!");

static_assert(sizeof(::NAudio::Dsp::WdlResampler) == 0x80, "Size mismatch!");

} // namespace end def NAudio::Dsp
