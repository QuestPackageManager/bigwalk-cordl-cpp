#pragma once
// IWYU pragma private; include "Dissonance/Log.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Log)
namespace Dissonance {
class DissonanceException;
}
namespace Dissonance {
struct LogLevel;
}
namespace System {
class Exception;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Dissonance {
class Log;
}
// Write type traits
MARK_REF_T(::Dissonance::Log*);
DEFINE_IL2CPP_CLASS(::Dissonance::Log*, "Dissonance", "Log");
// Dependencies System.Object
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.Log
class CORDL_TYPE Log : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsDebug)) bool  IsDebug;

 __declspec(property(get=get_IsError)) bool  IsError;

 __declspec(property(get=get_IsInfo)) bool  IsInfo;

 __declspec(property(get=get_IsTrace)) bool  IsTrace;

 __declspec(property(get=get_IsWarn)) bool  IsWarn;

/// @brief Field _basicFormat, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__basicFormat, put=__cordl_internal_set__basicFormat)) ::StringW  _basicFormat;

/// @brief Field _category, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__category, put=__cordl_internal_set__category)) int32_t  _category;

/// @brief Field _debugFormat, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugFormat, put=__cordl_internal_set__debugFormat)) ::StringW  _debugFormat;

/// @brief Field _traceFormat, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__traceFormat, put=__cordl_internal_set__traceFormat)) ::StringW  _traceFormat;

/// @brief Method AssertAndLogError, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA>
inline bool AssertAndLogError(bool  assertion, ::StringW  guid, ::StringW  format, TA  arg0) ;

/// @brief Method AssertAndLogError, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB>
inline bool AssertAndLogError(bool  assertion, ::StringW  guid, ::StringW  format, TA  arg0, TB  arg1) ;

/// @brief Method AssertAndLogError, addr 0x1805cb690, size 0x50, virtual false, abstract: false, final false
inline bool AssertAndLogError(bool  assertion, ::StringW  guid, ::StringW  msg) ;

/// @brief Method AssertAndLogWarn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA>
inline bool AssertAndLogWarn(bool  assertion, ::StringW  format, TA  arg0) ;

/// @brief Method AssertAndLogWarn, addr 0x1805cb6e0, size 0x30, virtual false, abstract: false, final false
inline bool AssertAndLogWarn(bool  assertion, ::StringW  msg) ;

/// @brief Method AssertAndThrowPossibleBug, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA>
inline void AssertAndThrowPossibleBug(bool  assertion, ::StringW  guid, ::StringW  format, TA  arg0) ;

/// @brief Method AssertAndThrowPossibleBug, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB>
inline void AssertAndThrowPossibleBug(bool  assertion, ::StringW  guid, ::StringW  format, TA  arg0, TB  arg1) ;

/// @brief Method AssertAndThrowPossibleBug, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB,typename TC>
inline void AssertAndThrowPossibleBug(bool  assertion, ::StringW  guid, ::StringW  format, TA  arg0, TB  arg1, TC  arg2) ;

/// @brief Method AssertAndThrowPossibleBug, addr 0x1805cb710, size 0x30, virtual false, abstract: false, final false
inline void AssertAndThrowPossibleBug(bool  assertion, ::StringW  guid, ::StringW  msg) ;

/// @brief Method CreatePossibleBugException, addr 0x1805cb740, size 0x50, virtual false, abstract: false, final false
inline ::Dissonance::DissonanceException* CreatePossibleBugException(::StringW  problem, ::StringW  guid) ;

/// @brief Method CreatePossibleBugException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::System::Exception* CreatePossibleBugException(::System::Func_2<::StringW,T>*  factory, ::StringW  problem, ::StringW  guid) ;

/// @brief Method CreateUserErrorException, addr 0x1805cb790, size 0x50, virtual false, abstract: false, final false
inline ::Dissonance::DissonanceException* CreateUserErrorException(::StringW  problem, ::StringW  likelyCause, ::StringW  documentationLink, ::StringW  guid) ;

/// @brief Method Debug, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA>
inline void Debug(::StringW  format, TA  p0) ;

/// @brief Method Debug, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB>
inline void Debug(::StringW  format, TA  p0, TB  p1) ;

/// @brief Method Debug, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB,typename TC>
inline void Debug(::StringW  format, TA  p0, TB  p1, TC  p2) ;

/// @brief Method Debug, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB,typename TC,typename TD>
inline void Debug(::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3) ;

/// @brief Method Debug, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB,typename TC,typename TD,typename TE>
inline void Debug(::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3, TE  p4) ;

/// @brief Method Debug, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB,typename TC,typename TD,typename TE,typename TF>
inline void Debug(::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3, TE  p4, TF  p5) ;

/// @brief Method Debug, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB,typename TC,typename TD,typename TE,typename TF,typename TG>
inline void Debug(::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3, TE  p4, TF  p5, TG  p6) ;

/// @brief Method Debug, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB,typename TC,typename TD,typename TE,typename TF,typename TG,typename TH>
inline void Debug(::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3, TE  p4, TF  p5, TG  p6, TH  p7) ;

/// @brief Method Debug, addr 0x1805cb7e0, size 0x10, virtual false, abstract: false, final false
inline void Debug(::StringW  message) ;

/// @brief Method Error, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA>
inline void Error(::StringW  format, TA  p0) ;

/// @brief Method Error, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB>
inline void Error(::StringW  format, TA  p0, TB  p1) ;

/// @brief Method Error, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB,typename TC>
inline void Error(::StringW  format, TA  p0, TB  p1, TC  p2) ;

/// @brief Method Error, addr 0x1805cb7f0, size 0x10, virtual false, abstract: false, final false
inline void Error(::StringW  message) ;

/// @brief Method Info, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA>
inline void Info(::StringW  format, TA  p0) ;

/// @brief Method Info, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB>
inline void Info(::StringW  format, TA  p0, TB  p1) ;

/// @brief Method Info, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB,typename TC>
inline void Info(::StringW  format, TA  p0, TB  p1, TC  p2) ;

/// @brief Method Info, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB,typename TC,typename TD>
inline void Info(::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3) ;

/// @brief Method Info, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB,typename TC,typename TD,typename TE>
inline void Info(::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3, TE  p4) ;

/// @brief Method Info, addr 0x1805cb800, size 0x10, virtual false, abstract: false, final false
inline void Info(::StringW  message) ;

static inline ::Dissonance::Log* New_ctor(int32_t  category, ::StringW  name) ;

/// @brief Method PossibleBugMessage, addr 0x1805cb810, size 0x10, virtual false, abstract: false, final false
inline ::StringW PossibleBugMessage(::StringW  problem, ::StringW  guid) ;

/// @brief Method ShouldLog, addr 0x1805cb820, size 0x80, virtual false, abstract: false, final false
inline bool ShouldLog(::Dissonance::LogLevel  level) ;

/// @brief Method Trace, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA>
inline void Trace(::StringW  format, TA  p0) ;

/// @brief Method Trace, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB>
inline void Trace(::StringW  format, TA  p0, TB  p1) ;

/// @brief Method Trace, addr 0x1805cb8a0, size 0x10, virtual false, abstract: false, final false
inline void Trace(::StringW  message) ;

/// @brief Method UserErrorMessage, addr 0x1805cb8b0, size 0xf0, virtual false, abstract: false, final false
inline ::StringW UserErrorMessage(::StringW  problem, ::StringW  likelyCause, ::StringW  documentationLink, ::StringW  guid) ;

/// @brief Method Warn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA>
inline void Warn(::StringW  format, TA  p0) ;

/// @brief Method Warn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB>
inline void Warn(::StringW  format, TA  p0, TB  p1) ;

/// @brief Method Warn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB,typename TC>
inline void Warn(::StringW  format, TA  p0, TB  p1, TC  p2) ;

/// @brief Method Warn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB,typename TC,typename TD>
inline void Warn(::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3) ;

/// @brief Method Warn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB,typename TC,typename TD,typename TE>
inline void Warn(::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3, TE  p4) ;

/// @brief Method Warn, addr 0x1805cb9a0, size 0x10, virtual false, abstract: false, final false
inline void Warn(::StringW  message) ;

/// @brief Method WriteLog, addr 0x1805cb9b0, size 0x220, virtual false, abstract: false, final false
inline void WriteLog(::Dissonance::LogLevel  level, ::StringW  message) ;

/// @brief Method WriteLogFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA>
inline void WriteLogFormat(::Dissonance::LogLevel  level, ::StringW  format, TA  p0) ;

/// @brief Method WriteLogFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB>
inline void WriteLogFormat(::Dissonance::LogLevel  level, ::StringW  format, TA  p0, TB  p1) ;

/// @brief Method WriteLogFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB,typename TC>
inline void WriteLogFormat(::Dissonance::LogLevel  level, ::StringW  format, TA  p0, TB  p1, TC  p2) ;

/// @brief Method WriteLogFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB,typename TC,typename TD>
inline void WriteLogFormat(::Dissonance::LogLevel  level, ::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3) ;

/// @brief Method WriteLogFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB,typename TC,typename TD,typename TE>
inline void WriteLogFormat(::Dissonance::LogLevel  level, ::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3, TE  p4) ;

/// @brief Method WriteLogFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB,typename TC,typename TD,typename TE,typename TF>
inline void WriteLogFormat(::Dissonance::LogLevel  level, ::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3, TE  p4, TF  p5) ;

/// @brief Method WriteLogFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB,typename TC,typename TD,typename TE,typename TF,typename TG>
inline void WriteLogFormat(::Dissonance::LogLevel  level, ::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3, TE  p4, TF  p5, TG  p6) ;

/// @brief Method WriteLogFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TA,typename TB,typename TC,typename TD,typename TE,typename TF,typename TG,typename TH>
inline void WriteLogFormat(::Dissonance::LogLevel  level, ::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3, TE  p4, TF  p5, TG  p6, TH  p7) ;

constexpr ::StringW const& __cordl_internal_get__basicFormat() const;

constexpr ::StringW& __cordl_internal_get__basicFormat() ;

constexpr int32_t const& __cordl_internal_get__category() const;

constexpr int32_t& __cordl_internal_get__category() ;

constexpr ::StringW const& __cordl_internal_get__debugFormat() const;

constexpr ::StringW& __cordl_internal_get__debugFormat() ;

constexpr ::StringW const& __cordl_internal_get__traceFormat() const;

constexpr ::StringW& __cordl_internal_get__traceFormat() ;

constexpr void __cordl_internal_set__basicFormat(::StringW  value) ;

constexpr void __cordl_internal_set__category(int32_t  value) ;

constexpr void __cordl_internal_set__debugFormat(::StringW  value) ;

constexpr void __cordl_internal_set__traceFormat(::StringW  value) ;

/// @brief Method .ctor, addr 0x1805cbbd0, size 0x140, virtual false, abstract: false, final false
inline void _ctor(int32_t  category, ::StringW  name) ;

/// @brief Method get_IsDebug, addr 0x1805cbd10, size 0x10, virtual false, abstract: false, final false
inline bool get_IsDebug() ;

/// @brief Method get_IsError, addr 0x1805cbd20, size 0x10, virtual false, abstract: false, final false
inline bool get_IsError() ;

/// @brief Method get_IsInfo, addr 0x1805cbd30, size 0x10, virtual false, abstract: false, final false
inline bool get_IsInfo() ;

/// @brief Method get_IsTrace, addr 0x1805cbd40, size 0x10, virtual false, abstract: false, final false
inline bool get_IsTrace() ;

/// @brief Method get_IsWarn, addr 0x1805cbd50, size 0x10, virtual false, abstract: false, final false
inline bool get_IsWarn() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Log() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Log", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Log(Log && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Log", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Log(Log const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16810};

/// @brief Field _traceFormat, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____traceFormat;

/// @brief Field _debugFormat, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____debugFormat;

/// @brief Field _basicFormat, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____basicFormat;

/// @brief Field _category, offset: 0x28, size: 0x4, def value: None
 int32_t  ____category;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Log, ____traceFormat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Log, ____debugFormat) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Log, ____basicFormat) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Log, ____category) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Log) == 0x30, "Size mismatch!");

} // namespace end def Dissonance
